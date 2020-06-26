import numpy as np
import matplotlib.pyplot as plt
N = 19
I = 250
x = np.zeros(N)
y = np.zeros(I)
y1 = np.zeros(I)
p = len(x)
#intializing the first and last element with 0 and 1
x[0] = 0
x[p-1] = 1
#defining the function of mean
def mean(a,b):
	return (a+b)/2
#defining a function which calls mean function in the array elements	
def aditya(x):
	for i in range(1,p-1):
		x[i] = mean(x[i-1],x[i+1])
	return x
#iterating the above function I times		
for i in range(0,I):
	aditya(x)
	if(N%2!=0):
		k1 = int(N/2.0)
		y[i] = x[k1]
	else:
		k1 = int(N/2.0)
		k2 = int(N/2.0) - 1
		y[i] = mean(x[k1],x[k2])			
	if(y[i]>=0.499):	
		print("These no of iterations are necessary for convergence:",i)	
		break;						
print("\n")
j = np.linspace(1,I,I)	
y1 = 0.5-y									#calculating the relative error by subracting 0.5 from each element  
#plotting the middle elements values verses each iteration
plt.subplot(2,1,1)
plt.plot(j,y)
plt.xlabel("$number of iterations$")
plt.ylabel("$value corresponding to the 22.5 degrees$")
#plotting the relative error values verses each iteration
plt.subplot(2,1,2)
plt.plot(j,y1)
plt.xlabel("$number of iterations$")
plt.ylabel("$relative error $")
plt.show()	
	



