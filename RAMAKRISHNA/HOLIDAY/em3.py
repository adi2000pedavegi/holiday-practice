import numpy as np
N = int(input("enter the size of the one dimensional matrix:"))
I = int(input("enter the number of iterations:"))
x = np.zeros(N)
p = len(x)
x[0] = 0
x[p-1] = 1
def mean(a,b):
	return (a+b)/2
def aditya(x):
	for i in range(1,p-1):
		x[i] = mean(x[i-1],x[i+1])
	return x
		
	
for i in range(I):
	aditya(x)
	print(x)
print("\n")	
if(N%2!=0):
	k1 = int(N/2.0)
	print(x[k1])
else:
	k1 = int(N/2.0)
	k2 = int(N/2.0) - 1
	print(mean(x[k1],x[k2]))
		
