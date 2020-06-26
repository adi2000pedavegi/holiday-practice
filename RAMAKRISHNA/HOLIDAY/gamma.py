
from scipy.stats import gamma
import seaborn as sb
import matplotlib.pyplot as plt
c = gamma.rvs(0.5,0.5,size=10000)
ax = sb.distplot(c,kde=True,color='crimson',hist_kws={"linewidth": 25,'alpha':1})
ax.set(xlabel='Gamma', ylabel='Frequency')
plt.show()



