qall_2D_fast = qall([1, 3, 6, 9:13, 16:20], 1:30:20001);
%% Importing qall files
for i = 1 : 4001
   i
   showCassie(qall_2D_fast(:, i));
end