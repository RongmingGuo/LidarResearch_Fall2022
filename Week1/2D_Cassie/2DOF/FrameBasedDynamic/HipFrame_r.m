function [x, y, theta] = HipFrame_r(q)
    l = 0.143; % pelvis frame to hip frame length
    % Obtain Mother Frame
    [x_m, y_m, theta_m] = PelvisFrame(q);
    B_m = [cos(theta_m), -sin(theta_m); sin(theta_m), cos(theta_m)];
    temp = [x_m; y_m] + B_m * [-l * cosd(50); -l * sind(50)]; 
    x = temp(1);
    y = temp(2);
    theta = theta_m + q(9);
end