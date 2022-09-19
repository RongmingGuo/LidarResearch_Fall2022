To Run 2D Cassie Kinematics Simulation:
1) Navigate to this folder
2) Open "TwoDCassieKin_test.m"
3) Double click on "qall.mat". This will load a 20 * 20001 double variable into your workspace.
These are cassie states (remember cassie have 20 states) at different time stamps.
4) Click run. A matlab plotting window should pop up and a 2D cassie should appear.

All the code that generated those figures from states are available in this folder. Feel free to trace it out by yourself :)

NOTE: Due to sensor capabilities, cassie's x-direction (forward) position data is not 100% accurate. That's why you might 
feel cassie is sliding.