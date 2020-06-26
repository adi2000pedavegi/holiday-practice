import numpy as np

n = int(input("enter the number:"))
a = np.zeros(n+1)
a[0] = 1
a[1] = 1
for i in range(1,n):
	a[i+1] = a[i] + a[i-1]
print(a)	
k1 = a[n-1] + a[n-2]
k2 = a[n]
print(k1)	
print(k2)

a = (1 + np.sqrt(5))**(n+1) - (1 - np.sqrt(5))**(n+1)
tempb = np.sqrt(5)
b = ((2)**(n+1))*tempb
c = a/b
print(c)
