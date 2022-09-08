function[relativePosi] = Tb_toe_r(q)
    relativePosi = Tb_knee_r(q) + [cos(pi/2 - q(6)), -sin(pi/2 - q(6)); sin(pi/2 - q(6)), cos(pi/2 - q(6))] * (2 .* [-sin(q(7)); -cos(q(7))]);% Leg Length = 2m
end