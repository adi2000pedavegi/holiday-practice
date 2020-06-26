import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
from sklearn import preprocessing
from pandas.plotting import scatter_matrix


data = pd.read_csv('cricket.csv')
print(data)
print(data.shape)
df1 = data.loc[:,'Match1'].values
df2 = data.loc[:,'Match2'].values
df3 = data.loc[:,'Match3'].values
df4 = data.loc[:,'Match4'].values
df5 = data.loc[:,'Match5'].values
df = np.matrix(zip(df1,df2,df3,df4,df5))
print(df)
print(df.shape)
print("\n")
fd1 = data.iloc[:,1].values
fd2 = data.iloc[:,2].values
fd3 = data.iloc[:,3].values
fd4 = data.iloc[:,4].values
fd5 = data.iloc[:,5].values
fd = np.matrix(zip(fd1,fd2,fd3,fd4,fd5))
print(fd)
print(fd.shape)

print(data.head(5))
print(data.tail(5))
#data.plot(color='green')
#data.hist(color='orange')
scatter_matrix(data)
plt.show()
