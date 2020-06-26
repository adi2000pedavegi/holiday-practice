import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
#from sklearn.cluster import KMeans

df = pd.read_excel('cricket.xlsx',dtype='complex')
x = df.iloc[:,1].values
y = df.iloc[:,5].values
print(df)
print(x)
print(y)
z = np.matrix(zip(x,y))
print(z)

'''kmeans = KMeans(3)
kmeans.fit(z)
G = kmeans.cluster_centers_
print(G)

plt.scatter(x,y)
plt.scatter(G[:,0],G[:,1],color = 'orange')
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.show()

'''

