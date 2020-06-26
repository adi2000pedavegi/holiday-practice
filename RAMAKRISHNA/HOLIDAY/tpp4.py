import numpy as np
a = np.zeros((3,3))
for i in range(3):
	for j in range(3):
		a[i][j] = int(input())
	
b = np.zeros((3,3))
for i in range(3):
	for j in range(3):
		b[i][j] = int(input())
	
x = np.matrix(a)
y = np.matrix(b)		
def amma(a,b):
	return a + b

def nanna(a,b):
	return a - b
def akka(a,b):
	return a*b

def krupa(a,b):
	return np.linalg.eig(a + b)
	

print(amma(x,y))
print(nanna(x,y))
print(akka(x,y))
print(krupa(x,y))
				
