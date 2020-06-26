import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
from sklearn.decomposition import PCA 

data2 = pd.read_excel('leaves.xlsx')
df1 = data2.loc[:,'sepal length']
df2 = data2.loc[:,'petal length']
df3 = data2.loc[:,'sepal width']
df4 = data2.loc[:,'petal width']
a = np.matrix(zip(df1,df2,df3,df4))
print(a)

pca = PCA(1)
pca.fit(a)
print(pca.explained_variance_)
b = pca.transform(a)
print(b)
plt.plot(a[:,0],a[:,1],'o',color='green')
plt.plot(b[:,0],'o',color='red')
plt.grid()
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.show()
