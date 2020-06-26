import numpy as np
import matplotlib.pyplot as plt
from mpmath import *
k = 0.5
x = np.arange(0,11)
z = np.size(x)
c = np.zeros(11)


for i in range(0,z):
	c[i] = (((i)/((k)**2))*(np.exp((-(i)**2)/(2*((k)**2)))))
	
	
print(x)
print(c)
plt.plot(x,c,'o-',color='yellow')
plt.show()



