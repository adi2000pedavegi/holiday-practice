import numpy as np
import pandas as pd
import shlex

df = pd.read_csv('innings.csv')
print(df)
print("\n")
temp = df.drop('Class',1)
tempx = temp.head(6).values
tempz = temp.tail(6).values
tempy = temp.iloc[6:12,:].values
x = tempx.T
y = tempy.T
z = tempz.T
aditya = np.matrix(np.hstack((x,y,z)))
print(aditya)
print("\n")
m1 = np.mean(aditya[0,:])
m2 = np.mean(aditya[1,:])
m3 = np.mean(aditya[2,:])
m4 = np.mean(aditya[3,:])
m5 = np.mean(aditya[4,:])
mean = np.array([[m1],[m2],[m3],[m4],[m5]])
print(mean)
print("\n")

s1 = np.zeros((5,5))
for i in range(aditya.shape[1]):
	s1 = s1 + ((aditya[:,i] - mean))*((aditya[:,i] - mean).T)
print(s1)
print("\n")
ramakrishna = np.hstack((x,y,z))
c1 = np.cov([ramakrishna[0,:],ramakrishna[1,:],ramakrishna[2,:],ramakrishna[3,:],ramakrishna[4,:]])
print(c1)
print("\n")
es1,es2 = np.linalg.eig(s1)
print(es1)
print(es2)
print("\n")	
ec1,ec2 = np.linalg.eig(c1)
print(ec1)
print(ec2)

w1 = es2[:,0]
w2 = es2[:,2]

w = np.hstack((w1,w2))
print((w.T)*(aditya))

