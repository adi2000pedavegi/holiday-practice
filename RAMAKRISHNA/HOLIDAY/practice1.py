import numpy as np
m = int(input("enter the number of rows of matrix:"))
n = int(input("enter the number of colums of matrix:"))
a = np.zeros((m,n))
for i in range(m):
	for j in range(n):
		a[i][j] = int(input())
	
	
		
print(a)
e1,e2 = np.linalg.eig(a)
print(e1)
print(e2)
