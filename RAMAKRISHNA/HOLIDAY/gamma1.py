
from scipy.stats import gamma
import numpy as np
import matplotlib.pyplot as plt

a = 0.5
b = 0.5

x = np.arange(0.01,1,0.01)
print(x)
temp1 = gamma.cdf(x,a,b)
temp2 = gamma.pdf(x,a,b)

print(temp2)
plt.plot(x,temp1,'o-',color='orange')
plt.plot(x,temp2,'o-',color='green')
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.grid()
plt.show()

