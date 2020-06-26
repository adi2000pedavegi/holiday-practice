import numpy as np
import matplotlib.pyplot as plt
from mpmath import *
k = 2
laba = 0.5
x = np.arange(0,11)
z = np.size(x)
c = np.zeros(11)


for i in range(0,z):
	c[i] = ((laba**k)*((i)**(k-1))*(np.exp(-laba*i)))/(factorial(k-1))
	
	
print(x)
print(c)
plt.plot(x,c,'o-',color='brown')
plt.show()



