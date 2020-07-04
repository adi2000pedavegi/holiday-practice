%MATLAB
%pdist(matrix,'hamming')  %hamming distance between a and b vectors present as matrix 
%comm.ErrorRate
%symerr(a,b)    %for any number of random symbols>=2
%biterr(a,b)    %for binary symbols only (0,1)
%nnz(a==b)
%nnz(a~=b)
%numel(matrix) %total number of elements in matrix
%A = eye(n) %identity matrix
%fvtool command for visualizing impulse response of filter


%scatterplot(moddata,1,0)  This is used for observing scatter plot of
%constellation points of moddata

%poly2trellis 
%The below 2 commands uses the output variable from the trellis command as
%their input argumnets(these are all  are inbuilt commands)
%convenc
%vitdec

%comm.ViterbiDecoder  %Direct tool for implementing viterbi decoding

%SIMULINK
%{
%Phase noise block in simulink adds phase noise to the angle of the complex
modulated data points
%}
