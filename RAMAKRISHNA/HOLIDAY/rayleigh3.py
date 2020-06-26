import numpy as np
import matplotlib.pyplot as plt
import math

k = 2
mu = k*(np.sqrt(np.pi/2.0))
var = ((4-(np.pi))/2.0)*((k)**2)
sigma  = np.sqrt(var)
s = np.random.rayleigh(k,1000)
count,x,ignored = plt.hist(s,20,normed=True)
y = ((x)/((k)**2))*(np.exp(-(x**2)/(2*((k)**2))))
print(mu)
print(sigma)
print(np.mean(s))
print(np.std(s))


plt.plot(x,y,color = 'green')
plt.grid()
plt.xlabel("$x$")
plt.ylabel('$y$')
plt.show()

