import numpy as np
import matplotlib.pyplot as plt
import math
import pandas as pd


data2 = pd.read_excel('leaves.xlsx')
df1 = data2.loc[:,'sepal length']
n = np.size(df1)
mu = np.mean(df1)
temp = ((np.sum((df1)**2)) - n*((mu)**2))/n
sigma = np.sqrt(temp)
sigma1 = np.std(df1)
print(df1)

print(sigma)
print(sigma1)
print(mu)

s = np.random.normal(mu,sigma,1000)
count,bins,ignored = plt.hist(s,20,normed=True,color='yellow')
y = 1/(sigma*np.sqrt(2*np.pi))*np.exp(-(bins-mu)**2/(2*sigma**2))
plt.plot(bins,y,color = 'green')
plt.grid()
plt.xlabel("$x$")
plt.ylabel('$y$')
plt.show()
