from scipy.stats import gamma
import numpy as np
import matplotlib.pyplot as plt


a = gamma.rvs(0.5,0.5,size=100)
print(float(np.mean(a)))
print(np.std(a))
plt.hist(a,bins=10,density=True,color='green')
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.show()


