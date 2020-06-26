
from scipy.stats import erlang
import numpy as np
import matplotlib.pyplot as plt

k = 47
laba = 1

x = np.arange(1,100)
print(x)
temp1 = erlang.cdf(x,k,laba)
temp2 = erlang.pdf(x,k,laba)

print(temp2)
plt.plot(x,temp1,'o-',color='orange')
plt.plot(x,temp2,'o-',color='green')
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.grid()
plt.show()


