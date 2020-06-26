from scipy.stats import bernoulli
import numpy as np
import matplotlib.pyplot as plt
p = 0.8
k1 = 0
k2 = 1
k = np.linspace(k1,k2,100)
temp1 = bernoulli.cdf(k,p)
temp2 = bernoulli.pmf(k1,p)
temp3 = bernoulli.pmf(k2,p)
print(temp1)
print(temp2)
print(temp3)
plt.plot(k,temp1,'o-',color='orange')
plt.plot(p,temp2,'o-',color='crimson')
plt.plot(p,temp3,'o-',color='crimson')
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.grid()
plt.show()

