
from scipy.stats import chi2
import numpy as np
import matplotlib.pyplot as plt

k = 0.5


x = np.arange(0.01,1,0.01)
print(x)
temp1 = chi2.cdf(x,k)
temp2 = chi2.pdf(x,k)

print(temp2)
plt.plot(x,temp1,'o-',color='orange')
plt.plot(x,temp2,'o-',color='green')
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.grid()
plt.show()


