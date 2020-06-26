import numpy as np
import matplotlib.pyplot as plt
from mpmath import *

k = 2
laba = 0.5
mu = float(k/laba)
var = (k)/(laba**2)
sigma  = np.sqrt(var)
s = np.random.gamma(k,1/laba,1000)
count,x,ignored = plt.hist(s,20,normed=True)
y = ((laba**k)*((x)**(k-1))*(np.exp(-laba*x)))/(factorial(k-1))

print(mu)
print(sigma)
print(np.mean(s))
print(np.std(s))


plt.plot(x,y,color = 'green')
plt.grid()
plt.xlabel("$x$")
plt.ylabel('$y$')
plt.show()

