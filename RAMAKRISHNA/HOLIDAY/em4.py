import numpy as np
import matplotlib.pyplot as plt

N = int(input("enter the size of the one dimensional matrix:"))
I = int(input("enter the number of iterations:"))
x = np.zeros(N)
y = np.zeros(I)
y1 = np.zeros(I)
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
	if(N%2!=0):
		k1 = int(N/2.0)
		y[i] = x[k1]
	else:
		k1 = int(N/2.0)
		k2 = int(N/2.0) - 1
		y[i] = mean(x[k1],x[k2])
	if(y[i]>=0.49):
		print(i,x)	
	
j = np.linspace(1,I,I)	
y1 = 0.5-y
#print(y)
#print(y1)
plt.subplot(2,1,1)
plt.plot(j,y)
plt.xlabel("$number of iterations$")
plt.ylabel("$value corresponding to the 22.5 degrees$")
plt.subplot(2,1,2)
plt.plot(j,y1)
plt.xlabel("$number of iterations$")
plt.ylabel("$relative error $")
plt.show()	
	



