function [x, y, theta] = TarsusFrame_r(q)
    l = 0.418;
    [x_m, y_m, theta_m] = ShinFrame_r(q);
    % Obtain Motor Frame
    B_m = [cos(theta_m), -sin(theta_m); sin(theta_m), cos(theta_m)];
    temp = [x_m; y_m] + B_m * [l * cosd(-130); l * sind(-130)];
    x = temp(1);
    y = temp(2);
    theta = theta_m - pi * (40 / 180) + q(12); 
end