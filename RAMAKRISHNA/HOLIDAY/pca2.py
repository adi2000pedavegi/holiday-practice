import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
from sklearn.decomposition import PCA 
data1 = pd.read_excel('ammananna.xlsx')
df1 = data1.loc[:,'Amma']
df2 = data1.loc[:,'Nanna']
df1.head()
df2.head()

a = np.matrix(zip(df1,df2))
print(a)


pca = PCA(2)
pca.fit(a)
print(pca.explained_variance_)
b = pca.transform(a)
print(b)
plt.plot(a[:,0],a[:,1],'o',color='green')
plt.plot(b[:,0],b[:,1],'o',color='red')
plt.grid()
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.show()
