import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
import subprocess
import shlex
from sklearn.decomposition import PCA 
data2 = pd.read_excel('leaves.xlsx')
df1 = data2.loc[:,'sepal length']
df2 = data2.loc[:,'petal length']
df3 = data2.loc[:,'sepal width']
df4 = data2.loc[:,'petal width']
a = np.matrix(zip(df1,df2,df3,df4))
print(a)
print("\n")
m = np.array([np.mean(a[:,0]),np.mean(a[:,1]),np.mean(a[:,2]),np.mean(a[:,3])])

print(m)
print("\n")
c0 = a[:,0] - m[0]
c1 = a[:,1] - m[1]
c2 = a[:,2] - m[2]
c3 = a[:,3] - m[3]
c = np.hstack((c0,c1,c2,c3))
S_w = ((c.T)*(c))
print(S_w)
print("\n")
A = np.linalg.inv(S_w)
print(A)
print("\n")

eigvals,eigvecs = np.linalg.eig(A)
print(eigvals)
print(eigvecs)
print("\n")
d = (eigvecs[:,0])
opt_mat = a*d
print(opt_mat)


plt.plot(a[:,0],a[:,1],'o',color='green')
plt.plot(opt_mat[:,0],'o',color='red')
plt.grid()
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.show()

