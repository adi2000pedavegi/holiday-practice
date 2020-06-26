import numpy as np
import matplotlib.pyplot as plt
from mpmath import *
l = input("enter the number:")

#evaluating gamma((n+1)/2)
def niranjan(l):
	if(l%2 == 0):
		return ((factorial(l))/((factorial(l/2.0))*(2**l)))*np.sqrt(np.pi)
	else:
		return factorial((l-1)/2)
		
			
		
		
		
v = niranjan(l)
print(v)

k = 2
x = np.arange(0,11)
z = np.size(x)
c = np.zeros(11)


for i in range(0,z):
	c[i] = (((i)**((k/2)-1))*(np.exp(-i/2)))/(((2)**(k/2))*(v))

	
	
	
print(x)
print(c)
plt.plot(x,c,'o-',color='yellow')
plt.show()




