import numpy as np
import matplotlib.pyplot as plt
from mpmath import *
param = 2
k = np.arange(0,11)
z = np.size(k)
c = np.zeros(11)


for i in range(0,z):
	c[i] = ((param)*(np.exp(-param*i)))
	
	
print(k)
print(c)
plt.plot(k,c,'o-',color='yellow')
plt.show()


