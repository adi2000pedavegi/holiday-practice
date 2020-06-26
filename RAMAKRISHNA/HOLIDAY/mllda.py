import numpy as np
import pandas as pd
import shlex

df = pd.read_csv('innings.csv')
#print(df)
print("\n")
temp = df.drop('Class',1)
x = np.matrix(temp.head(6).values)
z = np.matrix(temp.tail(6).values)
y = np.matrix(temp.iloc[6:12,:].values)
krupa = np.matrix(np.vstack((x,y,z)))
print(krupa)
N = x.size
print("\n")
#finding d dimensional mean vectors
x1 = np.mean(x[:,0])
x2 = np.mean(x[:,1])
x3 = np.mean(x[:,2])
x4 = np.mean(x[:,3])
x5 = np.mean(x[:,4])
m1 = np.matrix(np.vstack((x1,x2,x3,x4,x5)))
y1 = np.mean(y[:,0])
y2 = np.mean(y[:,1])
y3 = np.mean(y[:,2])
y4 = np.mean(y[:,3])
y5 = np.mean(y[:,4])
m2 = np.matrix(np.vstack((y1,y2,y3,y4,y5)))
z1 = np.mean(z[:,0])
z2 = np.mean(z[:,1])
z3 = np.mean(z[:,2])
z4 = np.mean(z[:,3])
z5 = np.mean(z[:,4])
m3 = np.matrix(np.vstack((z1,z2,z3,z4,z5)))
m = (m1 + m2 + m3)/3.0
#computing within class scatter matrix
s1 = np.zeros((5,5))
for i in range(5):
	s1 = s1 + (x[i,:].T - m1)*((x[i,:].T - m1).T)


s2 = np.zeros((5,5))
for i in range(5):
	s2 = s2 + (y[i,:].T - m2)*((y[i,:].T - m2).T)

		
s3 = np.zeros((5,5))
for i in range(5):
	s3 = s3 + (z[i,:].T - m3)*((z[i,:].T - m3).T)

						
sw = s1 + s2 + s3
#computing between class matrices
dummy = (m1 - m)*((m1 - m).T) + (m2 - m)*((m2 - m).T) + (m3 - m)*((m3 - m).T)
sb = N*dummy
#computing the main matrix
P = (np.linalg.inv(sw))*(sb)
#print(P)
#computing the eigen values
e1,e2 = np.linalg.eig(P)
print(e1)
print(e2)
print("\n")
w1 = e2[:,0]
w2 = e2[:,2]
#com[uting the optimised matrix
w = np.matrix(np.hstack((w1,w2)))
opt_mat = (krupa)*(w)
print(opt_mat)

