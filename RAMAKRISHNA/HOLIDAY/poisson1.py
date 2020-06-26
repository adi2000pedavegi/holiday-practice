from scipy.stats import poisson
import numpy as np
import matplotlib.pyplot as plt
mu = 2
k = np.arange(0,21)
temp1 = poisson.cdf(k,mu)
temp2 = poisson.pmf(k,mu)
print(temp2)
plt.plot(k,temp1,'o-',color='orange')
plt.plot(k,temp2,'o-',color='green')
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.grid()
plt.show()

