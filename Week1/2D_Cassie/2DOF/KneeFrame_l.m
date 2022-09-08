function[x, y, theta] = KneeFrame_l(q)
    % Relative Length
    l = 0.17; % hip-motor to knee_motor vector length
    % Get Motor Frame
    [x_m, y_m, theta_m] = HipFrame_l(q);
    B_m = [cos(theta_m), -sin(theta_m); sin(theta_m), cos(theta_m)];
    temp = [x_m; y_m] + B_m * [l; 0];
    x = temp(1);
    y = temp(2);
    theta = theta_m + q(5);
end