% encoder_fill is a 14 by 1 vector recording all rotational joint angles (filtered)

%% PD Gains
% At Motors: PD Gains are identical for two legs
obj.Kp_abduction = 400; % 500 for standing
obj.Kp_rotation = 200; % 500 for standing
obj.Kp_thigh = 500; % 200 for standing
obj.Kp_knee = 500; % 500 for standing
obj.Kp_toe = 10; % 500 for standing

obj.Kd_abduction = 10; % 4 for standing
obj.Kd_rotation = 4; % 4 for standing
obj.Kd_thigh = 15; % 10 for standing
obj.Kd_knee = 15; % 20 for standing
obj.Kd_toe = 2; % 40 for standing

% At Pelvis
obj.Kp_pitch = 80;
obj.Kd_pitch = 15;
obj.Kp_roll = 100;
obj.Kd_roll = 15;
obj.Kp_yaw = 100;
obj.Kd_yaw = 4;

% Controller Kp, Kd: 10 by 1, targeting only the motors
obj.Kp = repmat([obj.Kp_abduction;obj.Kp_rotation;obj.Kp_thigh;obj.Kp_knee; obj.Kp_toe],[2,1]);
obj.Kd = repmat([obj.Kd_abduction;obj.Kd_rotation;obj.Kd_thigh;obj.Kd_knee; obj.Kd_toe],[2,1]);
            
%% High Level Commands (DO NOT RUN THIS)
% High level commands are directly controlled by remote spoofer
obj.tg_velocity_x = p* RadioButton.LVA; % Longitudinal Velocity (Move forward)
obj.tg_velocity_x_fil = YToolkits.first_order_filter(obj.tg_velocity_x_fil, obj.tg_velocity_x, 0.0003);
obj.lateral_move = 0.015*RadioButton.LHA; % Lateral Velocity (Move sideway)
obj.lateral_move_fil = YToolkits.first_order_filter(obj.lateral_move_fil, obj.lateral_move, 0.0003);
obj.rotation_move = -0.2*RadioButton.RHA; % Change pelvis yaw angle (turning) -- try not to do this for now
pitch_des = median([RadioButton.RVA,-0.5,0.5]); % Adjust pelvis pitch
obj.pitch_des_fil = YToolkits.first_order_filter(obj.pitch_des_fil, pitch_des, 0.0005);
roll_des = RadioButton.RHA*0.1; % Adjust pelvis roll
obj.roll_des_fil = YToolkits.first_order_filter(obj.roll_des_fil,roll_des,0.0003); % cutoff frequency 0.1 Hz;
LL_des = 0.68+RadioButton.LSA*0.2; % Adjust Leg Length ****
obj.LL_des_fil = YToolkits.first_order_filter(obj.LL_des_fil,LL_des,obj.fil_para_4);

%% Relevant Sensor Readings
% Pelvis Orientation Matrix
R_WB = YToolkits.Angles.Quaternion_to_Matrix(cassieOutputs.pelvis.vectorNav.orientation);
% [a b c;
%  d e f;
%  g h i]; 3 by 3 orientation matrix
dR_WB = YToolkits.Angles.AngularVelocity_to_dMatrix(cassieOutputs.pelvis.vectorNav.angularVelocity, R_WB); % 3 by 3 orientation matrix time derivative

% Pelvis Angles and Angular Accelerations
[qyaw, qpitch, qroll, dqyaw, dqpitch, dqroll] = IMU_to_Euler_v2(cassieOutputs.pelvis.vectorNav.orientation, cassieOutputs.pelvis.vectorNav.angularVelocity);

%% Forward and Inverse Kinematics
% h0_joint: 10 by 1 vector denoting motor drive states
% h0: a new 10 by 1 vector swapping motor(3) and motor(4) to leg length and
% leg angle

% h0(1) = q_abduction_L;
% h0(2) = q_rotation_L;
% h0(3) = LL_L;
% h0(4) = LA_L;
% h0(5) = q_toe_L;
% h0(6) = q_abduction_R;
% h0(7) = q_rotation_R;
% h0(8) = LL_R;
% h0(9) = LA_R;
% h0(10) = q_toe_R;

% LA (Leg Length) and LL (Leg Angle)
function [LA,LL] = Forward_Kinematics_p(qFlexion,qKnee)
    % qFlexion: Associated with Hip Pitch Motor
    % qKnee: Associated with Knee Motor
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

% Inverse Kinematics
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

%% The PD Controller Logic (Standing)
% Inverse Kinematics:
% 1) Desired Pelvis Orientation

% calculate the torque (except toe).
u([1,6]) = - (obj.Kp_abduction_stand * ...
  [obj.h0_joint(1)-obj.standing_abduction_offset; obj.h0_joint(6) - ( - obj.standing_abduction_offset)] + ...
  obj.Kd_abduction_stand*[obj.dh0_joint(1); obj.dh0_joint(6)]);
u([2,7]) = - (obj.Kp_rotation_stand*[obj.h0_joint(2);obj.h0_joint(7)] + obj.Kd_rotation_stand*[obj.dh0_joint(2);obj.dh0_joint(7)]);
u([3,8]) = - (obj.Kp_thigh_stand.*y_thigh + obj.Kd_thigh_stand.*dy_thigh);
u([4,9]) = - (obj.Kp_knee_stand*y_knee + obj.Kd_knee_stand*dy_knee);

%% The PD Controller Logic (Walking)

