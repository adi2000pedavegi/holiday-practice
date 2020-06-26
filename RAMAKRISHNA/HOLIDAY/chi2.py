from scipy.stats import chi2
import numpy as np
import matplotlib.pyplot as plt


a = chi2.rvs(0.5,size=100)
print(float(np.mean(a)))
print(np.std(a))
plt.hist(a,bins=10,density=True,color='green')
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.show()



