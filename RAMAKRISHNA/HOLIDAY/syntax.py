import numpy as np
#A = np.matrix([[1,2,3],[4,5,6],[7,9,8]])
#eigvals,eigvecs = np.linalg.eig(A)
#C = np.linalg.inv(A)
#d = np.linalg.det(A)
#print(C)
#print(d)
#print(eigvecs)
#print(eigvals)

A = np.matrix([[1,2,3],[4,5,6],[7,8,9]])
B = np.matrix([1,4,7])
c = np.zeros((3,3))
for i in range(3):
	c[i,:] = A[i,:] - B

print(c)


