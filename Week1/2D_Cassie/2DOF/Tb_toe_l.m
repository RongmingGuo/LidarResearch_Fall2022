function[relativePosi] = Tb_toe_l(q)
    relativePosi = Tb_knee_l(q) + [cos(pi/2 - q(4)), -sin(pi/2 - q(4)); sin(pi/2 - q(4)), cos(pi/2 - q(4))] * (2 .* [-sin(q(5)); -cos(q(5))]);% Leg Length = 2m
end