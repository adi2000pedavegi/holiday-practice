
from scipy.stats import bernoulli
import seaborn as sb
import matplotlib.pyplot as plt
import numpy as np


k = bernoulli.rvs(size=1000,p=0.6)
print(np.mean(k))
print(np.std(k))
plt.hist(k,bins=10,density=True,color='green')
#ax = sb.distplot(k,kde=True,color='crimson',hist_kws={"linewidth": 25,'alpha':1})
#ax.set(xlabel='Bernouli', ylabel='Frequency')
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.grid()
plt.show()
