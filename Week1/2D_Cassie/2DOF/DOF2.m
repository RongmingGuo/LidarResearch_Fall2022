%% State Space
% q = [
% x
% y
% theta
% alpha1
% alpha2
% ]

q = [0; 3; 0; pi/6; pi/3; pi/12; pi/6];
b_knee_l = Tb_knee_l(q);
b_toe_l = Tb_toe_l(q);
b_knee_r = Tb_knee_r(q);
b_toe_r = Tb_toe_r(q);

%% Plotting Script
figure(1)
% plot pelvis
plot(q(1), q(2), 'k.', 'MarkerSize', 40);
hold on
grid on
axis equal
xlim([q(1) - 4, q(1) + 4])
ylim([q(2) - 4, q(2) + 4])
% plot groud
plot([q(1) - 4, q(1) + 4], [0 0])
% plot robot
% Generate Pelvis Frame
B = [cos(q(3)), -sin(q(3)); sin(q(3)), cos(q(3))];
% transition B-frame measurements to world frame
w_knee_l = [q(1); q(2)] + B * b_knee_l;
w_knee_r = [q(1); q(2)] + B * b_knee_r;
w_toe_l = [q(1); q(2)] + B * b_toe_l;
w_toe_r = [q(1); q(2)] + B * b_toe_r;
% Plot Left leg
plot([q(1), w_knee_l(1)], [q(2), w_knee_l(2)], 'b', 'LineWidth', 3); % Thign
plot(w_knee_l(1), w_knee_l(2), 'k.', 'MarkerSize', 20); % motor
plot([w_knee_l(1), w_toe_l(1)], [w_knee_l(2), w_toe_l(2)], 'b', 'LineWidth', 3); % Shin
% Plot Right Leg
plot([q(1), w_knee_r(1)], [q(2), w_knee_r(2)], 'r', 'LineWidth', 3); % Thign
plot(w_knee_r(1), w_knee_r(2), 'k.', 'MarkerSize', 20); % motor
plot([w_knee_r(1), w_toe_r(1)], [w_knee_r(2), w_toe_r(2)], 'r', 'LineWidth', 3); % Shin
