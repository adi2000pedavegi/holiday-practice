from scipy.stats import binom
import numpy as np
import matplotlib.pyplot as plt
n = 10
p = 0.3
k = np.arange(0,21)
temp1 = binom.cdf(k,n,p)
temp2 = binom.pmf(k,n,p)
plt.plot(k,temp1,'o-',color='orange')
plt.plot(k,temp2,'o-',color='green')
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.grid()
plt.show()

