function [x, y, theta] = ShinFrame_r(q)
    % Get Mother Frame
    [x_m, y_m, theta_m] = KneeFrame_r(q);
    % Relative Geometry
    l = 0.05; % knee to shin vector length
    B_m = [cos(theta_m), -sin(theta_m); sin(theta_m), cos(theta_m)];
    temp = [x_m; y_m] + B_m * [l; 0];
    x = temp(1);
    y = temp(2);
    theta = theta_m + q(6);
end