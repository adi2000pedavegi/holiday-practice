from scipy.stats import expon
import numpy as np
import matplotlib.pyplot as plt
param = 0.5
k = np.arange(0.01,1,0.01)
temp1 = expon.cdf(k,param)
temp2 = expon.pdf(k,param)
print(temp2)
plt.plot(k,temp1,'o-',color='orange')
plt.plot(k,temp2,'o-',color='green')
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.grid()
plt.show()

