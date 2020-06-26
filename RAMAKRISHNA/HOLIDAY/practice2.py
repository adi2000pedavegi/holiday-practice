import numpy as np
n = int(input("enter the size of the array:")
print("enter the array elements:")
a = np.zeros((n))
for i in range(n):
	a[i] = int(input())


print(a)
b = np.sort(a)
print(b)	
c = np.argsort(a)
print(c)

