import numpy as np
import matplotlib.pyplot as plt
from mpmath import *
n = 10
p = 0.3
k = np.arange(0,11)
z = np.size(k)
c = np.zeros(11)


for i in range(0,z):
	c[i] = (binomial(n,i))*((p)**i)*((1-p)**(n-i))
	
	
print(k)
print(c)
plt.plot(k,c,'o-',color='yellow')
plt.show()


