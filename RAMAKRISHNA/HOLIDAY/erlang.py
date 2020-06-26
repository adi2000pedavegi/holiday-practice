
from scipy.stats import erlang
import seaborn as sb
import matplotlib.pyplot as plt
c = erlang.rvs(2,2,size=10000)
ax = sb.distplot(c,kde=True,color='grey',hist_kws={"linewidth": 25,'alpha':1})
ax.set(xlabel='Random Variable', ylabel='Frequency')
plt.show()




