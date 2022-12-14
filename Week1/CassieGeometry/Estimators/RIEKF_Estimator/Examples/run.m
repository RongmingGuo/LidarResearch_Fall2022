%% Add Paths
clear; matlabrc; restoredefaultpath; clc;

% Add agility robotics code path
AGILITY_CODE_PATH = '../../../';
addpath(genpath(AGILITY_CODE_PATH));

% Add paths for this code and load example measurements
addpath('../');
addpath(genpath('../gen/linux')); % add path to linux compiled kinematics
%addpath(genpath('../../../Estimators/Cassie_StateEstimation')); 
addpath(genpath('../Libraries')); 
addpath(genpath('../Examples')); 
load(fullfile('data','measurements_v2.mat'));
load('data/true_state_v2.mat')

% Set noise parameters
EKF_InitFcn

%% Run RIEKF
open('example_RIEKF');
sim('example_RIEKF');
    
% Plot results
plot_riekf;

%% Run QEKF
% open('example_QEKF');
% sim('example_QEKF');
%     
% % Plot results
% plot_qekf;
