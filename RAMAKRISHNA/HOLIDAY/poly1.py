import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
from sklearn.linear_model import LinearRegression
from sklearn.preprocessing import PolynomialFeatures
df = pd.read_csv('cricket.csv')

x1 = np.matrix(df.iloc[:,1].values)
y1 = np.matrix(df.iloc[:,5].values)
x = x1.T
y = y1.T



print(df)
print(x)
print(y)

l1 = LinearRegression()
l1.fit(x,y)
p1 = PolynomialFeatures(4)
poly_x = p1.fit_transform(x)
l2 = LinearRegression()
l2.fit(poly_x,y)
plt.plot(x,y,'o',color='crimson')
plt.plot(x,(poly_x),'o-',color='yellow')
plt.xlim(0,120)
plt.ylim(0,120)
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.show()


