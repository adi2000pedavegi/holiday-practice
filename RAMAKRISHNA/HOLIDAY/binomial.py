from scipy.stats import binom
import matplotlib.pyplot as plt
import seaborn as sb

data_binom = binom.rvs(n=20,p=0.8,loc=0,size=1000)
ax = sb.distplot(data_binom,kde=True,color='blue',hist_kws={"linewidth": 25,'alpha':1})
ax.set(xlabel='Binomial', ylabel='Frequency')
plt.show()
