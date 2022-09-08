function[relativePosi] = Tb_knee_r(q)
    relativePosi = 1 * [-sin(q(6)); -cos(q(6))]; % Thigh length = 1m
end