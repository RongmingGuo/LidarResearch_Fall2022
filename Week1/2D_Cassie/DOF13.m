% 2D Cassie State Space Definition
% q = [x; y; theta; alpha1_l, alpha2_l; alpha3_l; alpha4_l; alpha5_l; alpha1_r, alpha2_r; alpha3_r; alpha4_r; alpha5_r];

%% Cassie Constants

%% Transformation Matrices (Location)
displace_b_hip_l = Tb_hip_l(q);

%% Jacobian Matrices (Velocity)

%% Acceleration MAtrices