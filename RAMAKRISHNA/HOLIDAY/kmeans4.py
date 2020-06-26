import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
from sklearn.cluster import KMeans

data = pd.read_excel('ammananna.xlsx')
df1 = data.loc[:,'Amma']
df2 = data.loc[:,'Nanna']

x = np.matrix(zip(df1,df2))
N = x.size
x = x.reshape(N,1)
print(x)


kmeans = KMeans(n_clusters=4)
kmeans.fit(x)
kmeans.labels_
centroids = kmeans.cluster_centers_
fig = plt.figure()
print(centroids)
plt.scatter(df1,df2,color = 'green')
plt.plot(centroids[:,0],'o',color='red')
plt.xlim(0,200)
plt.ylim(0,200)
plt.grid()
plt.show()	
	
