
from scipy.stats import beta
import numpy as np
import matplotlib.pyplot as plt
alpha = 0.5
betha = 0.5
k = np.arange(0.01,1,0.01)
temp1 = beta.cdf(k,alpha,betha)
temp2 = beta.pdf(k,alpha,betha)
print(temp2)
plt.plot(k,temp1,'o-',color='orange')
plt.plot(k,temp2,'o-',color='green')
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.grid()
plt.show()

