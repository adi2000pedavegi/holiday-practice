
from scipy.stats import expon
import seaborn as sb
import matplotlib.pyplot as plt
c = expon.rvs(0.5,size=10000)
ax = sb.distplot(c,kde=True,color='green',hist_kws={"linewidth": 25,'alpha':1})
ax.set(xlabel='Poisson', ylabel='Frequency')
plt.show()

