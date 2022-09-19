function [x, y, theta] = ShinFrame_l(q)
    % Get Mother Frame
    [x_m, y_m, theta_m] = KneeFrame_l(q);
    % Relative Geometry
    l = 0.0743; % Knee to Shin Length
    B_m = [cos(theta_m), -sin(theta_m); sin(theta_m), cos(theta_m)];
    temp = [x_m; y_m] + B_m * [l * cosd(-53); l * sind(-53)];
    x = temp(1);
    y = temp(2);
    theta = theta_m + q(6) + pi * (40 / 180);
end