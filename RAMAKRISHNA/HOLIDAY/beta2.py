from scipy.stats import beta
import numpy as np
import matplotlib.pyplot as plt

alpha = 0.5
betha = 0.5
a = beta.rvs(alpha,betha,size=10000)
print(np.mean(a))
print(np.std(a))
plt.hist(a,bins=10,density=True,color='green')
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.show()

