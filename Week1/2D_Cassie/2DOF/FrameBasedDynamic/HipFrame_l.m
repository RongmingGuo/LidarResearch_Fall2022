function [x, y, theta] = HipFrame_l(q)
    % Obtain Mother Frame
    B = [cos(q(3)), -sin(q(3)); sin(q(3)), cos(q(3))];
    temp = q(1:2) + B * [-0.05; -0.1]; 
    x = temp(1);
    y = temp(2);
    theta = q(3) + q(4);
end