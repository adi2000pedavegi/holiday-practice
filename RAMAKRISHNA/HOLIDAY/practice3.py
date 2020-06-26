import numpy as np
va = 2+ 3j
vb = va
c = np.dot(va,vb)
print(c)
print("enter the matrix a:")
a = np.zeros((2,2))
for i in range(2):
	for j in range(2):
		a[i][j] = int(input())
print("enter the matrix b:")
b = np.zeros((2))
for i in range(2):
	b[i] = int(input())
			
 
print((np.linalg.solve(a, b)))
k = np.roots(b)
print(k)
#w = np.linalg.lstsq(A.T, y)[0]  #provides the linear regression of matrix A with the data points y
