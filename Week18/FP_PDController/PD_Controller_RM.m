% Referenced Umich FG Controller
% RM, experimental development for C++
classdef PD_Controller_RM <matlab.System & matlab.system.mixin.Propagates & matlab.system.mixin.SampleTime %#codegen
    %% Cassie Hardware
    properties (Access = private, Constant)
        TorqueLimits = repmat([112.5;112.5;195.2;195.2;45],[2,1]);
        ActuatorLimits = [-0.2618, 0.3927;    -0.3927, 0.3927;    -0.8727, 1.3963;    -2.8623, -0.7330;   -2.4435, -0.5236; ...
            -0.3927, 0.2618;    -0.3927, 0.3927;    -0.8727, 1.3963;    -2.8623, -0.7330;   -2.4435, -0.5236];
        Ks1 = 1800;
        Ks2 = 1600;
    end
    %% Sensor Readings and Processed Data
    properties (Access = private)
        h0_joint_d;
        dh0_joint_d;
    end
    %% Controllers
    properties
        % Walking
        Kp_abduction = 400; % Hip Yaw
        Kp_rotation = 200; % Hip Row
        Kp_thigh = 500; % Hip Pitch
        Kp_knee = 500;
        Kp_toe = 10;

        Kd_abduction = 10;
        Kd_rotation = 4;
        Kd_thigh = 15;
        Kd_knee = 15;
        Kd_toe = 2;
        
        % Standing
        Kp_abduction_stand = 500; % Hip Yaw
        Kp_rotation_stand = 500; % Hip Row
        Kp_thigh_stand = 200; % Hip Pitch
        Kp_knee_stand = 500;
        Kp_toe_stand = 500;

        Kd_abduction_stand = 4;
        Kd_rotation_stand = 4;
        Kd_thigh_stand = 10;
        Kd_knee_stand = 20;
        Kd_toe_stand = 40;
        
        % PD Gains for Pelvis Orientation
        Kp_pitch = 80;
        Kd_pitch = 15;
        Kp_roll = 100;
        Kd_roll = 15;
        Kp_yaw = 100;
        Kd_yaw = 4;
    end
    
    %% Main Function
    methods (Access = protected)
        
        % Main Control
        function [userInputs] = stepImpl(obj, t, cassieOutputs, isSim, GaitLibrary, encoder_fil, LL)
            %% Initialize --------------------------------------------------------
            % Data = PreFunctions.Construct_Data;
            % Reset the desired motor torques to zero in case they aren't defined
            userInputs = CassieModule.getUserInStruct;
            u = zeros(10, 1);
            
            %% Sensor Reading
            qa = CassieModule.getDriveProperty(cassieOutputs,'position'); % 10 by 1 drive properties (positional)
            dqa = CassieModule.getDriveProperty(cassieOutputs,'velocity'); % 10 by 1 drive properties (velocity)
            qaL = qa(1:5);
            qaR = qa(6:10);
            dqaL =  dqa(1:5);
            dqaR =  dqa(6:10);
            
            qj = CassieModule.getJointProperty(cassieOutputs,'position'); % 5 by 1 joint anlge
            dqj = CassieModule.getJointProperty(cassieOutputs,'velocity'); % 5 by 1 joint angular velocity
            qjL =  qj(1:2); % Shin pitch, tarsus pitch
            qjR =  qj(4:5);
            
            [qyaw, qpitch, qroll, dqyaw, dqpitch, dqroll] = IMU_to_Euler_v2(cassieOutputs.pelvis.vectorNav.orientation, cassieOutputs.pelvis.vectorNav.angularVelocity);
            
            % Reorganize
            q_abduction_R = qaR(1);
            q_rotation_R = qaR(2);
            q_thigh_R = qaR(3);
            q_thigh_knee_R = qaR(4);
            q_knee_shin_R = qjR(1);
            q_thigh_shin_R = q_thigh_knee_R + q_knee_shin_R;
            q_shin_tarsus_R = qjR(2);
            q_toe_R = qaR(5);

            q_abduction_L = qaL(1);
            q_rotation_L = qaL(2);
            q_thigh_L = qaL(3);
            q_thigh_knee_L = qaL(4);
            q_knee_shin_L = qjL(1);
            q_thigh_shin_L = q_thigh_knee_L + q_knee_shin_L;
            q_shin_tarsus_L = qjL(2);
            q_toe_L = qaL(5);


            dq_abduction_R = dqaR(1);
            dq_rotation_R = dqaR(2);
            dq_thigh_R = dqaR(3);
            dq_thigh_knee_R = dqaR(4);
            dq_knee_shin_R = dqjR(1);
            dq_thigh_shin_R = dq_thigh_knee_R + dq_knee_shin_R;
            dq_shin_tarsus_R = dqjR(2);
            dq_toe_R = dqaR(5);

            dq_abduction_L = dqaL(1);
            dq_rotation_L = dqaL(2);
            dq_thigh_L = dqaL(3);
            dq_thigh_knee_L = dqaL(4);
            dq_knee_shin_L = dqjL(1);
            dq_thigh_shin_L = dq_thigh_knee_L + dq_knee_shin_L;
            dq_shin_tarsus_L = dqjL(2);
            dq_toe_L = dqaL(5);

            qall = [  0;  0;              0;              qyaw;           qpitch;              qroll;
                  q_abduction_L;	q_rotation_L;	q_thigh_L;      q_thigh_knee_L;     q_knee_shin_L;      q_shin_tarsus_L;    q_toe_L;
                  q_abduction_R;	q_rotation_R;	q_thigh_R;      q_thigh_knee_R;     q_knee_shin_R;      q_shin_tarsus_R;    q_toe_R];

            dqall = [ 0;  0;              0;              dqyaw;         dqpitch;            dqroll;
                  dq_abduction_L;	dq_rotation_L;	dq_thigh_L;     dq_thigh_knee_L;    dq_knee_shin_L;     dq_shin_tarsus_L;   dq_toe_L;
                  dq_abduction_R;	dq_rotation_R;	dq_thigh_R;     dq_thigh_knee_R;    dq_knee_shin_R;     dq_shin_tarsus_R;   dq_toe_R];
        
              %% Data Processing
              % h0_joint is the original actuator joint space
              % h0 is the modified actuator joint space with LL and LA
              obj.h0_joint=[qaL; qaR];
              obj.dh0_joint = [dqaL; dqaR];
              [obj.h0, obj.dh0] = get_FK_v1(obj, obj.h0_joint, obj.dh0_joint);
              
              %% Standing Controller
              % Compute the desired pose (constant for now)
              h0_d = zeros(10, 1);
              h0_d([1, 6]) = 0; % desired abduction == 0
              h0_d([2, 7]) = 0; % desired roll == 0
              h0_d([3, 8]) = 0; % desired LA
              h0_d([4, 9]) = LL; % desired LL
              h0_d([5, 10]) = 0; % ignore toe torque for now
              % PD Controller in the h0 space
              Kp = 1;
              Kd = 0.1;
              [obj.h0_joint_d, obj.dh0_joint_d] = get_IK_v1(obj, h0_d, Kp * (h0_d - obj.h0) - Kd * obj.dh0);
              %% Commanding Torque
              u([1, 6]) = obj.Kp_abduction * [obj.h0_joint(1)-obj.h0_joint_d(1); obj.h0_joint(6) - obj.h0_joint_d(6)] + obj.Kd_abduction * [obj.dh0_joint(1); obj.dh0_joint(6)];            
              u([2, 7]) = - (obj.Kp_rotation_stand * [obj.h0_joint(2);obj.h0_joint(7)] + obj.Kd_rotation_stand*[obj.dh0_joint(2);obj.dh0_joint(7)]);
              u([3, 8]) = - (obj.Kp_thigh_stand * [obj.h0_joint(3) - obj.h0_joint_d(3); obj.h0_joint(8) - obj.h0_joint_d(8)] + obj.Kd_thigh_stand * [obj.dh0_joint(3); obj.dh0_joint(8)]);
              u([4, 9]) = - (obj.Kp_thigh_stand * [obj.h0_joint(4) - obj.h0_joint_d(4); obj.h0_joint(9) - obj.h0_joint_d(9)] + obj.Kd_thigh_stand * [obj.dh0_joint(4); obj.dh0_joint(9)]);
              u = YToolkits.vector_saturate(u,obj.safe_TorqueLimits,-obj.safe_TorqueLimits);
              userInputs.torque = u;
        end
        
        function[] = setupImpl(obj)
            
        end
    end
    
    %% FK & IK Auxiliary Functions
    methods (Access = protected)
       function [LA,LL] = Forward_Kinematics_p(qFlexion,qKnee)
        % qFlexion: Associated with Hip Pitch Motor -- controls LA
        % qKnee: Associated with Knee Motor -- controls both the LL and LA
        % Leg Length defined as length from hip pitch to toe joint
        % Leg Angle defined as the angle of the projection of leg vector onto
        % sagital plane with respect to the verticle line
        t2 = qKnee+7.0./2.0e2;
        t3 = cos(t2);
        t4 = t3.*5.292e-1;
        t5 = t4+5.300526400000001e-1;
        LA = qFlexion-acos(1.0./sqrt(t5).*(t4+5.601052800000001e-1).*9.44822373393802e-1)+1.0./1.0e1;
        if nargout > 1
            LL = sqrt(t5);
        end
       end
    
       function [dLA,dLL] = Forward_Kinematics_v(qFlexion,qKnee,dqFlexion,dqKnee)
            % qFlexion: Associated with Hip Pitch Motor
            % qKnee: Associated with Knee Motor

            %FORWARD_KINEMATICS_V
            %    [DLA,DLL] = FORWARD_KINEMATICS_V(QFLEXION,QKNEE,DQFLEXION,DQKNEE)

            %    This function was generated by the Symbolic Math Toolbox version 7.1.
            %    25-Jul-2017 14:38:55

            t2 = qKnee+7.0./2.0e2;
            t3 = sin(t2);
            t4 = cos(t2);
            t5 = t4.*5.292e-1;
            t6 = t5+5.300526400000001e-1;
            t7 = t5+5.601052800000001e-1;
            t8 = 1.0./sqrt(t6);
            dLA = dqFlexion-dqKnee.*1.0./sqrt((t7.^2.*(-8.926893172654969e-1))./t6+1.0).*(t3.*t8.*(1.0./2.0)-t3.*1.0./t6.^(3.0./2.0).*t7.*(1.0./4.0));
            if nargout > 1
                dLL = dqKnee.*t3.*t8.*(-2.646e-1);
            end
       end
        %% IK
        function [qFlexion,qKnee] = Inverse_Kinematics_p(LA,LL)
            %INVERSE_KINEMATICS_P
            %    [QFLEXION,QKNEE] = INVERSE_KINEMATICS_P(LA,LL)

            %    This function was generated by the Symbolic Math Toolbox version 7.1.
            %    25-Jul-2017 14:50:50

            t2 = LL.^2;
            qFlexion = LA+acos((t2.*9.44822373393802e-1+2.839440665154953e-2)./LL)-1.0./1.0e1;
            if nargout > 1
                qKnee = -acos(t2.*1.889644746787604-1.001611186696901)-7.0./2.0e2;
            end
        end

        function [dqFlexion,dqKnee] = Inverse_Kinematics_v(LA,LL,dLA,dLL)
            %INVERSE_KINEMATICS_V
            %    [DQFLEXION,DQKNEE] = INVERSE_KINEMATICS_V(LA,LL,DLA,DLL)

            %    This function was generated by the Symbolic Math Toolbox version 7.1.
            %    25-Jul-2017 14:50:50

            t2 = 1.0./LL.^2;
            t3 = LL.^2;
            t4 = t3+3.005264000000002e-2;
            dqFlexion = dLA+dLL.*1.0./sqrt(t2.*t4.^2.*(-8.926893172654969e-1)+1.0).*(t2.*t4.*9.44822373393802e-1-1.889644746787604);
            if nargout > 1
                t5 = t3.*1.889644746787604-1.001611186696901;
                dqKnee = LL.*dLL.*1.0./sqrt(-t5.^2+1.0).*3.779289493575208;
            end
        end
        
        function [hd_output, dhd_output] = get_FK_v1(obj, hd_joint,dhd_joint)
            hd_output = hd_joint;
            dhd_output = dhd_joint;
            % Change the hip pitch(3), knee(4) to LA and LL. I believe LL
            % is leg length and LA is leg angle in sagital plane.
            [hd_output(3), hd_output(4)] = Forward_Kinematics_p(hd_joint(3), hd_joint(4));
            [hd_output(8), hd_output(9)] = Forward_Kinematics_p(hd_joint(8), hd_joint(9));
            [dhd_output(3), dhd_output(4)] = Forward_Kinematics_v(hd_joint(3), hd_joint(4), dhd_joint(3), dhd_joint(4));
            [dhd_output(8), dhd_output(9)] = Forward_Kinematics_v(hd_joint(8), hd_joint(9), dhd_joint(8), dhd_joint(9));
        end
        
        function [ hd_joint, dhd_joint] = get_IK_v1(obj, hd_output,dhd_output)
            hd_joint = hd_output;
            dhd_joint = dhd_output;
            hd_output(4) = min(hd_output(4),1.02);
            hd_output(9) = min(hd_output(9),1.02);
            [hd_joint(3), hd_joint(4)] = Inverse_Kinematics_p(hd_output(3), hd_output(4));
            [hd_joint(8), hd_joint(9)] = Inverse_Kinematics_p(hd_output(8), hd_output(9));
            [dhd_joint(3), dhd_joint(4)] = Inverse_Kinematics_v(hd_output(3), hd_output(4), dhd_output(3), dhd_output(4));
            [dhd_joint(8), dhd_joint(9)] = Inverse_Kinematics_v(hd_output(8), hd_output(9), dhd_output(8), dhd_output(9));
        end
       
    end
end