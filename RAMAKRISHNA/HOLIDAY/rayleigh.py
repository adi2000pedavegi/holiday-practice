
from scipy.stats import rayleigh
import seaborn as sb
import matplotlib.pyplot as plt
c = rayleigh.rvs(0.5,size=10000)
ax = sb.distplot(c,kde=True,color='crimson',hist_kws={"linewidth": 25,'alpha':1})
ax.set(xlabel='Rayleigh', ylabel='Frequency')
plt.show()


