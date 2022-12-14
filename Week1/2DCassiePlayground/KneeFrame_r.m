function[x, y, theta] = KneeFrame_r(q)
    % Relative Length
    l = 0.118; % hip-motor to knee_motor vector length
    % Get Motor Frame
    [x_m, y_m, theta_m] = HipFrame_r(q);
    B_m = [cos(theta_m), -sin(theta_m); sin(theta_m), cos(theta_m)];
    temp = [x_m; y_m] + B_m * [0; -l];
    x = temp(1);
    y = temp(2);
    theta = theta_m + q(10);
end