import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
from sklearn import preprocessing
from pandas.plotting import scatter_matrix

data = pd.read_csv('cricket.csv')
print(data)
print(data.shape)
x = data.loc[:,'Match1'].values
y = data.loc[:,'Match5'].values

n = np.size(x)
mux = np.mean(x)
muy = np.mean(y)
s1 = 0
for i in range(n):
	s1 = s1 + x[i]*y[i]

t = n*(mux)*(muy)
s2 = 0
for i in range(n):
	s2 = s2 + (x[i] - mux)**2

b= (s1-t)/s2
a = (muy - (b*mux))
print(a)
print(b)
yfit = np.zeros(n)
for i in range(n):
	yfit[i] = (a + b*x[i])

plt.plot(x,y,'o',color='green')
yfit = (a + b*x)
plt.plot(x,yfit,color='orange')	
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.show()	
	 
