function[] = showCassie(q)
    %% Constructing Frames
    frameState = zeros(3, 11);
    % Pelvis Frame
    [x, y, theta] = PelvisFrame(q);
    frameState(1, 1) = x;
    frameState(2, 1) = y;
    frameState(3, 1) = theta;
    % Left Hip Frame
    [x, y, theta] = HipFrame_l(q);
    frameState(1, 2) = x;
    frameState(2, 2) = y;
    frameState(3, 2) = theta;
    % Left Knee Frame
    [x, y, theta] = KneeFrame_l(q);
    frameState(1, 3) = x;
    frameState(2, 3) = y;
    frameState(3, 3) = theta;
    % Left Shin Frame
    [x, y, theta] = ShinFrame_l(q);
    frameState(1, 4) = x;
    frameState(2, 4) = y;
    frameState(3, 4) = theta;
    % Left Tarsus Frame
    [x, y, theta] = TarsusFrame_l(q);
    frameState(1, 5) = x;
    frameState(2, 5) = y;
    frameState(3, 5) = theta;
    % Left Toe Frame
    [x, y, theta] = ToeFrame_l(q);
    frameState(1, 6) = x;
    frameState(2, 6) = y;
    frameState(3, 6) = theta;
    % Right Hip Frame
    [x, y, theta] = HipFrame_r(q);
    frameState(1, 7) = x;
    frameState(2, 7) = y;
    frameState(3, 7) = theta;
    % Right Knee Frame
    [x, y, theta] = KneeFrame_r(q);
    frameState(1, 8) = x;
    frameState(2, 8) = y;
    frameState(3, 8) = theta;
    % Right Shin Frame
    [x, y, theta] = ShinFrame_r(q);
    frameState(1, 9) = x;
    frameState(2, 9) = y;
    frameState(3, 9) = theta;
    % Right Tarsus Frame
    [x, y, theta] = TarsusFrame_r(q);
    frameState(1, 10) = x;
    frameState(2, 10) = y;
    frameState(3, 10) = theta;
    % Right Toe Frame
    [x, y, theta] = ToeFrame_r(q);
    frameState(1, 11) = x;
    frameState(2, 11) = y;
    frameState(3, 11) = theta;
    
    %% Plotting
    % Plot Ground
    figure(1)
    plot([-100, 100], [0, 0], 'k', 'LineWidth', 5);
    xlim([-2, 2]);
    ylim([-0.5, 3.5]);
    grid on
    hold on
    axis equal
    % Plot Pelvis
    plot(frameState(1, 1), frameState(2, 1), 'y.', 'MarkerSize', 70);
    % Plot LeftLeg
    plot(frameState(1, 2:6), frameState(2, 2:6), 'k.', 'MarkerSize', 12);
    plot(frameState(1, 2:6), frameState(2, 2:6), 'b', 'Linewidth', 3);
    % Plot RightLeg
    plot(frameState(1, 7:11), frameState(2, 7:11), 'k.', 'MarkerSize', 12);
    plot(frameState(1, 7:11), frameState(2, 7:11), 'r', 'Linewidth', 2);
    hold off
    
end