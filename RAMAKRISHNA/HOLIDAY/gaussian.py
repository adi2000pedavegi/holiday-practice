import numpy as np
import matplotlib.pyplot as plt

mu,sigma = 0.5,0.1
s = np.random.normal(mu,sigma,1000)
count,bins,ignored = plt.hist(s,20,normed=True)
y = 1/(sigma*np.sqrt(2*np.pi))*np.exp(-(bins-mu)**2/(2*sigma**2))
plt.plot(bins,y,color = 'green')
plt.grid()
plt.xlabel("$x$")
plt.ylabel('$y$')
plt.show()
