import numpy as np
from sklearn import preprocessing
a = np.matrix([[1,2,3],[4,5,6],[7,8,9]])
print(a)
data = preprocessing.scale(a)
print(data)
mu = data.mean(axis=0)
sigma = data.std(axis=0)
print(mu)
print(sigma)

data_scaler = preprocessing.MinMaxScaler()
#not a mean normalization
data_scaled = data_scaler.fit_transform(a)
data_normal = preprocessing.normalize(a,norm='l1')

print(data_scaled)
print(data_normal)
b = np.zeros((3,3))
b0 = (a[:,0] - min(a[:,0]))/(max(a[:,0]) - min(a[:,0]))
b1 = (a[:,1] - min(a[:,1]))/(max(a[:,1]) - min(a[:,1]))
b2 = (a[:,2] - min(a[:,2]))/(max(a[:,2]) - min(a[:,2]))
b = np.hstack((b0,b1,b2))
print(b)

c = np.zeros((3,3))
c0 = (a[:,0] - np.mean(a[:,0]))/(max(a[:,0]) - min(a[:,0]))
c1 = (a[:,1] - np.mean(a[:,1]))/(max(a[:,1]) - min(a[:,1]))
c2 = (a[:,2] - np.mean(a[:,2]))/(max(a[:,2]) - min(a[:,2]))
c = np.hstack((c0,c1,c2))
print(c)
data_binarizied = preprocessing.Binarizer(5).fit_transform(a)
print(data_binarizied)

encoder = preprocessing.OneHotEncoder()
encoder.fit(a)
encoded_data = encoder.transform([[4,2,9]]).toarray()
print(encoded_data)


