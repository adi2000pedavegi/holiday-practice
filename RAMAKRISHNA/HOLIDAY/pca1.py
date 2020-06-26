import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.preprocessing import scale
from sklearn.decomposition import PCA 
data = pd.read_excel('ammananna.xlsx')
df1 = data.loc[:,'Amma']
df2 = data.loc[:,'Nanna']
df1.head()
df2.head()

a = np.matrix(zip(df1,df2))
a = scale(a)


pca = PCA(n_components = 2)
pca.fit(a)
a1 = pca.fit_transform(a)
var = pca.explained_variance_ratio_
var1=np.cumsum(np.round(pca.explained_variance_ratio_, decimals=4)*100)
print(var)
print(a1)
plt.scatter(df1,df2,color = 'green')
plt.xlim(0,200)
plt.ylim(0,200)
plt.plot(var1)
plt.show()


