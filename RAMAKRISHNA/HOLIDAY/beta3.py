import numpy as np
import matplotlib.pyplot as plt
from mpmath import *
from scipy.integrate import quad
def integrand(x,a,b):
	return ((x)**(a-1))*((1-x)**(b-1))

a = input("enter the value of the number:")
b = input("enter the value of the number:")
c = quad(integrand,0,1,args=(a,b))
d = c[0]
print(d)
 	
 	
k = np.arange(0,11)
z = np.size(k)
l = np.zeros(11)


for i in range(0,z):
	l[i] = (((i)**(a-1))*((1-i)**(b-1)))/d	
	
print(k)
print(l)
plt.plot(k,l,'o-',color='crimson')
plt.show()


