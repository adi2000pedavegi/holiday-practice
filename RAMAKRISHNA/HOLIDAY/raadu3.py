import numpy as np 
m = input("enter the row size:")
n = input("enter the column size:")

a = np.zeros((m,n))
for i in range(m):
	for j in range(n):
		a[i][j] = int(input())
		print(a[i][j])
	print("\n")
print(a)
		
		
