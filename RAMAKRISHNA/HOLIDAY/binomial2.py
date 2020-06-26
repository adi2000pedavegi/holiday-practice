from scipy.stats import binom
import numpy as np
import matplotlib.pyplot as plt

a = binom.rvs(n = 10,p = 0.3,size=10000)
print(np.mean(a))
print(np.std(a))
plt.hist(a,bins=10,normed=True,color='green')
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.show()
