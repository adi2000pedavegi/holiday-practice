import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
from sklearn.cluster import KMeans

df = pd.DataFrame({
    'x': [12, 20, 28, 18, 29, 33, 24, 45, 45, 52, 51, 52, 55, 53, 55, 61, 64, 69, 72],
    'y': [39, 36, 30, 52, 54, 46, 55, 59, 63, 70, 66, 63, 58, 23, 14, 8, 19, 7, 24]
})

kmeans = KMeans(n_clusters=4)
kmeans.fit(df)
labels = kmeans.predict(df)
centroids = kmeans.cluster_centers_
fig = plt.figure()

plt.scatter(df['x'],df['y'],color = 'green')
for idx,centroid in enumerate(centroids):
	plt.scatter(*centroid,color='red')
plt.xlim(0,80)
plt.ylim(0,80)
plt.grid()
plt.show()	
	
