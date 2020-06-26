import numpy as np
import matplotlib.pyplot as plt
import mpmath
x = np.linspace(0,2,10)
y = np.sin(x)
a = np.zeros((3,3))
m = int(input("enter the number of rows:"))
print("\n")
n = int(input("enter the number of colums:"))
for i in range(m):
	for j in range(n):
		a[i][j] = int(input())
	print("\n")	

e1,e2 = np.linalg.eig(a)
print(e1)
	
#plt.plot(x,y)
#plt.show()
