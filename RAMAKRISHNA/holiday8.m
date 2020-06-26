%Computing matrix transpose,eigenvalues and eigen vectors
A = [1 2 3;4 5 6 ;7 8 9]
transpose(A)
A'
[eigenvec,eigenval] = eig(A)
eigenvec*(eigenval)*inv(eigenvec)
%This is the format of eigen decomposition matrix
%This gives again A matrix 