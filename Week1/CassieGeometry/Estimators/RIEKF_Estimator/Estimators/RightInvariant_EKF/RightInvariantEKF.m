% State Estimator
classdef RightInvariantEKF < matlab.System & matlab.system.mixin.Propagates %#codegen
    
    % Public, tunable properties
    properties
        % Enable Measurement Updates
        ekf_update_enabled = true;
        % Gyroscope Noise std
        gyro_noise_std = 0.1*ones(3,1); 
        % Gyroscope Bias Noise std
        gyro_bias_noise_std = 0.1*ones(3,1);
        % Accelerometer Noise std
        accel_noise_std = 0.1*ones(3,1);
        % Accelerometer Bias Noise std
        accel_bias_noise_std = 0.1*ones(3,1);
        % Contact Noise std
        contact_noise_std = 0.1*ones(3,1); 
        % Encoder Noise std
        encoder_noise_std = 0.1*ones(14,1);
        % Prior Base Pose std
        prior_base_pose_std = 0.1*ones(6,1);
        % Prior Base Velocity std
        prior_base_velocity_std = 0.1*ones(3,1);
        % Prior Contact position std
        prior_contact_position_std = 0.1*ones(3,1);
        % Prior Gyroscope Bias std
        prior_gyro_bias_std = 0.1*ones(3,1); 
        % Prior Accelerometer Bias std
        prior_accel_bias_std = 0.1*ones(3,1); 
        % Prior Forward Kinematics std
        prior_forward_kinematics_std = 0.1*ones(3,1); 
    end
    
    % PROTECTED PROPERTIES ==================================================
    properties (Access = protected)
    end % properties
    
    % PRIVATE PROPERTIES
    properties(Access = private)
        X_prev;              % State matrix Lie group
        Theta_prev;          % State parameter vector
        P_prev;              % Covariance of state
        t_prev;              % time
        filter_enabled; % Flag that specifies if the filter is enabled
        
        % --- Sensor Covariances ---
        Qg;      % Gyro Covariance Matrix
        Qbg;     % Gyro bias Covariance Matrix
        Qa;      % Accel Covariance Matrix
        Qba;     % Accel Bias Covariance Matrix
        Qc;      % Contact Covariance Matrix
        Qe;      % Encoder Covariance Matrix
        Np;      % Prior Forward Kinematics Covariance Matrix
        P_prior; % Prior State Covariance Matrix
        
    end
    
    % Pre-computed constants
    properties(Access = private, Constant)
        g = [0;0;-9.81];             % Gravity vector
    end
    
    % PROTECTED METHODS =====================================================
    methods (Access = protected)
        
        function setupImpl(obj)
            %SETUPIMPL Initialize System object.
            obj.filter_enabled = false;
            
            % Initialize Sensor Covariances
            obj.Qg = diag(obj.gyro_noise_std.^2);          % Gyro Covariance Matrix
            obj.Qbg = diag(obj.gyro_bias_noise_std.^2);    % Gyro bias Covariance Matrix
            obj.Qa = diag(obj.accel_noise_std.^2);         % Accel Covariance Matrix
            obj.Qba = diag(obj.accel_bias_noise_std.^2);   % Accel Bias Covariance Matrix
            obj.Qc = diag(obj.contact_noise_std.^2);       % Contact Covariance Matrix
            obj.Qe = diag(obj.encoder_noise_std.^2);       % Encoder Covariance Matrix
            obj.Np = diag(obj.prior_forward_kinematics_std.^2); % Prior Forward Kinematics Covariance Matrix
            obj.P_prior = blkdiag(diag(obj.prior_base_pose_std(1:3).^2), ...
                                  diag(obj.prior_base_velocity_std.^2), ...
                                  diag(obj.prior_base_pose_std(4:6).^2), ...
                                  diag(obj.prior_contact_position_std.^2), ...
                                  diag(obj.prior_contact_position_std.^2), ...
                                  diag(obj.prior_gyro_bias_std.^2),...
                                  diag(obj.prior_accel_bias_std.^2)); % Prior State Covariance Matrix
                                        
            % Initialze State and Covariance
            obj.X_prev = eye(7);
            obj.Theta_prev = zeros(6,1);
            obj.P_prev = eye(21);
            
            % Variables to store previous measurements
            obj.t_prev = 0;
        end % setupImpl
        
        function [X, Theta, P, enabled] = stepImpl(obj, enable, t, w, a, encoders, contact, X_init, Theta_init)
            % Quaternion-based EKF
            %
            %   Inputs:
            %       EnableFilter - flag to enable/disable the filter
            %       t            - time
            %       w            - angular velocity
            %       a            - linear acceleration
            %       encoders     - joint encoder positions
            %       contact      - contact indicator
            %
            %   Outputs:
            %       X   - current state group mean, 
            %       Theta   - current state parameter mean, 
            %       P   - current state covariance 
            %       enabled - flag indicating when the filter is enabled
            %
            %   Author: Ross Hartley
            %   Date:   04/18/2019
            %
            
            % Change contact to discrete
            contact = double(contact==1);
            
            % Wait until valid encoder signal and t_prev is set
            if norm(encoders) == 0 || obj.t_prev == 0
                enable = 0; % Keep filter disabled
            end
           
            % Enable filter
            if ~enable
                % If filter trigger is disabled, zero everything
                obj.X_prev = eye(7);
                obj.Theta_prev = zeros(6,1);
                obj.P_prev = eye(21);
                obj.filter_enabled = false;
            elseif ~obj.filter_enabled && (contact(1) == 1 || contact(2) == 1)
                % If filter trigger is enabled, initialize filter is not already initialized
                obj.X_prev = X_init;
                obj.Theta_prev = Theta_init;
                M = eye(21);
                Rt = obj.X_prev(1:3,1:3)';
                M(4:15,4:15) = blkdiag(Rt,Rt,Rt,Rt);
                obj.P_prev = M*obj.P_prior*M';
                obj.filter_enabled = true;
            end
            
            %% Predict state using IMU measurements
            [R, v, p, dL, dR, bg, ba] = obj.Separate_States(obj.X_prev, obj.Theta_prev);
            
            % Bias corrected IMU information
            dt = t-obj.t_prev;
            w = w - bg;
            a = a - ba;
            gx = Lie.skew(obj.g);
%             wx = Lie.skew(w);
            ax = Lie.skew(a);
            
            % Base Pose Dynamics
            G0 = Lie.Gamma(w*dt,0);
            G1 = Lie.Gamma(w*dt,1);
            G2 = Lie.Gamma(w*dt,2);
            R_pred = R*G0;
            v_pred = v + (R*G1*a + obj.g)*dt;
            p_pred = p + v*dt + (R*G2*a + 0.5*obj.g)*dt^2;
            
            % Foot Position Dynamics
            dL_off = p_pred + R_pred * p_VectorNav_to_LeftToeBottom(encoders); 
            dR_off = p_pred + R_pred * p_VectorNav_to_RightToeBottom(encoders); 
            dL_pred = contact(1)*dL + (1-contact(1))*dL_off;
            dR_pred = contact(2)*dR + (1-contact(2))*dR_off;
            
            % Bias Dynamics
            bg_pred = bg; 
            ba_pred = ba;
                 
            % Analytical State transition matrix
            Phi = eye(21);
            phi = w*dt;
            phix = Lie.skew(phi);
            theta = norm(phi);            
            if (norm(w) > 1e-6)
                Psi1 = ax*Lie.Gamma(-phi,2) ...
                    + ((sin(theta)-theta*cos(theta))/(theta^3))*(phix*ax) ...
                    - ((cos(2*theta)-4*cos(theta)+3)/(4*theta^4))*(phix*ax*phix) ...
                    + ((4*sin(theta)+sin(2*theta)-4*theta*cos(theta)-2*theta)/(4*theta^5))*(phix*ax*phix^2) ...
                    + (((theta)^2-2*theta*sin(theta)-2*cos(theta)+2)/(2*theta^4))*(phix^2*ax) ...
                    - ((6*theta-8*sin(theta)+sin(2*theta))/(4*theta^5))*(phix^2*ax*phix) ...
                    + ((2*(theta)^2-4*theta*sin(theta)-cos(2*theta)+1)/(4*theta^6))*(phix^2*ax*phix^2);

                Psi2 = ax*Lie.Gamma(-phi,3) ...
                    - ((theta*sin(theta)+2*cos(theta)-2)/(theta^4))*(phix*ax) ...
                    - ((6*theta-8*sin(theta)+sin(2*theta))/(8*theta^5))*(phix*ax*phix) ...
                    - ((2*(theta)^2+8*theta*sin(theta)+16*cos(theta)+cos(2*theta)-17)/(8*theta^6))*(phix*ax*phix^2) ...
                    + (((theta)^3+6*theta-12*sin(theta)+6*theta*cos(theta))/(6*theta^5))*(phix^2*ax) ...
                    - ((6*(theta)^2+16*cos(theta)-cos(2*theta)-15)/(8*theta^6))*(phix^2*ax*phix) ...
                    + ((4*(theta)^3+6*theta-24*sin(theta)-3*sin(2*theta)+24*theta*cos(theta))/(24*theta^7))*(phix^2*ax*phix^2);
            else
                Psi1 = (1/2)*ax;
                Psi2 = (1/6)*ax;
            end                 
            Phi(4:6,1:3) = gx*dt;
            Phi(7:9,1:3) = 0.5*gx*dt^2;
            Phi(7:9,4:6) = eye(3)*dt;
            Phi(1:3,16:18) = -R*G1*dt;
            Phi(4:6,16:18) = -Lie.skew(v_pred)*R*G1*dt + R*Psi1*dt^2;
            Phi(7:9,16:18) = -Lie.skew(p_pred)*R*G1*dt + R*Psi2*dt^3;
            Phi(10:12,16:18) = -Lie.skew(dL_pred)*R*G1*dt;
            Phi(13:15,16:18) = -Lie.skew(dR_pred)*R*G1*dt;
            Phi(4:6,19:21) = -R*Lie.Gamma(w*dt,1)*dt;
            Phi(7:9,19:21) = -R*Lie.Gamma(w*dt,2)*dt^2;
            
            % Discrete Noise Matrix
            hR_R = R_VectorNav_to_RightToeBottom(encoders);
            hR_L = R_VectorNav_to_LeftToeBottom(encoders);
            G = blkdiag(Lie.Adjoint(obj.X_prev),eye(6));
            Q = blkdiag(obj.Qg, obj.Qa, zeros(3), hR_L*(obj.Qc+(1e4*eye(3).*(1-contact(1))))*hR_L',  hR_R*(obj.Qc+(1e4*eye(3).*(1-contact(2))))*hR_R', obj.Qbg, obj.Qba); 
            Qd = Phi*G*Q*G'*Phi'*dt; % approximate

            % Predicted state
            X_pred = eye(7);
            X_pred(1:3,:) = [R_pred, v_pred, p_pred, dL_pred, dR_pred];
            Theta_pred = [bg_pred; ba_pred];
            P_pred = Phi*obj.P_prev*Phi' + Qd;
            
%             % Verification of analytical state transition: 
%             A = [     -wx, zeros(3), zeros(3), zeros(3), zeros(3),  -eye(3), zeros(3);
%                       -ax,      -wx, zeros(3), zeros(3), zeros(3), zeros(3),  -eye(3); 
%                  zeros(3),   eye(3),      -wx, zeros(3), zeros(3), zeros(3), zeros(3);
%                  zeros(3), zeros(3), zeros(3),      -wx, zeros(3), zeros(3), zeros(3);
%                  zeros(3), zeros(3), zeros(3), zeros(3),      -wx, zeros(3), zeros(3);
%                  zeros(3), zeros(3), zeros(3), zeros(3), zeros(3), zeros(3), zeros(3);
%                  zeros(3), zeros(3), zeros(3), zeros(3), zeros(3), zeros(3), zeros(3)];
%             Phi_L = expm(A*dt);
%             Adj_Xk1 = blkdiag(Lie.Adjoint(X_pred), eye(6));
%             Adj_XkInv = blkdiag(Lie.Adjoint(inv(obj.X_prev)), eye(6));
%             Phi_R = Adj_Xk1 * Phi_L * Adj_XkInv;
            
            
            %% Update state using encoder measurements            
            Y = []; b = []; H = []; N = []; PI = []; BigX = [];
            if (obj.ekf_update_enabled)
                J_left = Jp_VectorNav_to_LeftToeBottom(encoders);
                J_right = Jp_VectorNav_to_RightToeBottom(encoders);
                % Left Contact
                if (contact(1) == 1)
                    Y = [Y;[p_VectorNav_to_LeftToeBottom(encoders);0;1;-1;0]];
                    b = [b;[zeros(3,1);0;1;-1;0]];
                    H = [H;[zeros(3), zeros(3), -eye(3), eye(3), zeros(3), zeros(3), zeros(3)]];
                    N = R_pred*J_left*obj.Qe *J_left'*R_pred' + obj.Np;
                    PI = zeros(3,7);
                    PI(1:3, 1:3) = eye(3,3);
                    BigX = X_pred; 
                end
                % Right Contact
                if (contact(2) == 1)
                    Y = [Y;[p_VectorNav_to_RightToeBottom(encoders);0;1;0;-1]];
                    b = [b;[zeros(3,1);0;1;0;-1]];
                    H = [H;[zeros(3), zeros(3), -eye(3), zeros(3), eye(3), zeros(3), zeros(3)]];
                    N = R_pred*J_right*obj.Qe *J_right'*R_pred' + obj.Np;
                    PI = zeros(3,7);
                    PI(1:3, 1:3) = eye(3,3);
                    BigX = X_pred;
                end
                
                if (contact(1)==1 && contact(2)==1)
                    % equivalent to a concatenated blockdiag
                    N = zeros(6,6);
%                     J = Jp_VectorNav_to_LeftToeBottom(encoders);
                    N(1:3,1:3) = R_pred*J_left*obj.Qe *J_left'*R_pred' + obj.Np;
%                     J = Jp_VectorNav_to_RightToeBottom(encoders);
                    N(4:6,4:6) = R_pred*J_right*obj.Qe *J_right'*R_pred' + obj.Np;
                    
                    PI = zeros(6,14);
                    PI(1:3,1:3) = eye(3,3);
                    PI(4:6,8:10) = eye(3,3);
                    
                    BigX = zeros(14,14);
                    BigX(1:7,1:7) = X_pred;
                    BigX(8:14,8:14) = X_pred;
                end
            end      
           
%             Y0 = []; b0 = []; H0 = []; N0 = []; PI0 = []; BigX0 = [];
%             if (obj.ekf_update_enabled)
%                 % Left Contact
%                 if (contact(1) == 1)
%                     Y0 = vertcat(Y0, [p_VectorNav_to_LeftToeBottom(encoders);0;1;-1;0]);
%                     b0 = vertcat(b0, [zeros(3,1);0;1;-1;0]);
%                     H0 = vertcat(H0, [zeros(3), zeros(3), -eye(3), eye(3), zeros(3), zeros(3), zeros(3)]);
%                     J0 = Jp_VectorNav_to_LeftToeBottom(encoders);
%                     N0 = blkdiag(N0, R_pred*J0*obj.Qe *J0'*R_pred' + obj.Np);
%                     PI0 = blkdiag(PI0, [eye(3),zeros(3,4)]);
%                     BigX0 = blkdiag(BigX0, X_pred);
%                 end
%                 % Right Contact
%                 if (contact(2) == 1)
%                     Y0 = vertcat(Y0, [p_VectorNav_to_RightToeBottom(encoders);0;1;0;-1]);
%                     b0 = vertcat(b0, [zeros(3,1);0;1;0;-1]);
%                     H0 = vertcat(H0, [zeros(3), zeros(3), -eye(3), zeros(3), eye(3), zeros(3), zeros(3)]);
%                     J0 = Jp_VectorNav_to_RightToeBottom(encoders);
%                     N0 = blkdiag(N0, R_pred*J0*obj.Qe *J0'*R_pred' + obj.Np);
%                     PI0 = blkdiag(PI0, [eye(3),zeros(3,4)]);
%                     BigX0 = blkdiag(BigX0, X_pred);
%                 end
%             end        
           
%             Y
%             b
%             H
%             N
%             PI
%             BigX 
%            
%             Y0
%             b0
%             H0
%             N0
%             PI0
%             BigX0 
           % Correct State
            if isempty(Y)
                % No measurements
                X = X_pred;
                Theta = Theta_pred;
                P = P_pred;
            else
                % Compute measurement update
                S = H*P_pred*H' + N;   % Innovation covariance
                K = (P_pred*H')/S;     % Kalman gain
                delta_x = K*PI*(BigX*Y-b); % Correction vector
                % Update the state
                tic
                [X, Theta] = obj.Compose(X_pred, Theta_pred, delta_x);
                toc
                % Update Covariance
                I = eye(21);
                P = (I-K*H)*P_pred*(I-K*H)' + K*N*K'; % Joseph update form
            end

            % If filter is disabled, output initial values
            if ~obj.filter_enabled
                X = eye(7);
                Theta = zeros(6,1);
                P = eye(21);
            end
                       
            % Store last values
            obj.t_prev = t;
            obj.X_prev = X;
            obj.Theta_prev = Theta;
            obj.P_prev = P;
            
            % Output enable flag
            enabled = double(obj.filter_enabled);
            
        end % stepImpl

        
        function [R, v, p, dL, dR, bg, ba] = Separate_States(~, X, Theta) 
            % Separate state vector into components
            R = X(1:3,1:3);  % Orientation
            v = X(1:3,4);    % Velocity
            p = X(1:3,5);    % Position
            dL = X(1:3,6);   % Left Foot Position
            dR = X(1:3,7);   % Right Foot Position
            ba = Theta(1:3); % Accel Bias
            bg = Theta(4:6); % Gyro Bias
        end
        
        function [X, Theta] = Compose(~, X_bar, Theta_bar, delta_x)
            % Update state prediction with error correction vector
            X = Lie.Exp(delta_x(1:15))*X_bar;
            Theta = Theta_bar + delta_x(16:21);
        end
    
        
        %% Define Outputs
        function resetImpl(~)
            %RESETIMPL Reset System object states.
        end % resetImpl
        
        function [X, Theta, P, enabled] = getOutputSizeImpl(~)
            %GETOUTPUTSIZEIMPL Get sizes of output ports.
            X = [7,7];
            Theta = [6,1];
            P = [21,21];
            enabled = [1,1];
        end % getOutputSizeImpl
        
        function [X, Theta, P, enabled] = getOutputDataTypeImpl(~)
            %GETOUTPUTDATATYPEIMPL Get data types of output ports.
            X = 'double';
            Theta = 'double';
            P = 'double';
            enabled = 'double';
        end % getOutputDataTypeImpl
        
        function [X, Theta, P, enabled] = isOutputComplexImpl(~)
            %ISOUTPUTCOMPLEXIMPL Complexity of output ports.
            X = false;
            Theta = false;
            P = false;
            enabled = false;
        end % isOutputComplexImpl
        
        function [X, Theta, P, enabled] = isOutputFixedSizeImpl(~)
            %ISOUTPUTFIXEDSIZEIMPL Fixed-size or variale-size output ports.
            X = true;
            Theta = true;
            P = true;
            enabled = true;
        end % isOutputFixedSizeImpl
    end % methods
end % classdef