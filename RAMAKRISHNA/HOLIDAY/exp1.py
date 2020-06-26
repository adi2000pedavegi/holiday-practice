from scipy.stats import expon
import numpy as np
import matplotlib.pyplot as plt
h = int(2)
a = expon.rvs(h,size=10000)
print(np.mean(a))
print(np.std(a))
plt.hist(a,bins=10,density=True,color='green')
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.show()

