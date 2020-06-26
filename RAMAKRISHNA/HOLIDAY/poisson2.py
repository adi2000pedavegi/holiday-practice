from scipy.stats import poisson
import numpy as np
import matplotlib.pyplot as plt

a = poisson.rvs(mu = 2,size=10000)
print(np.mean(a))
print(np.std(a))
plt.hist(a,bins=10,density=True,color='green')
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.show()

