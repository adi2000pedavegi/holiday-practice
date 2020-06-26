import numpy as np

u = np.random.uniform(0,1,(10,1))

print(u)
x = np.zeros((10,1))
for i in range(0,10):
	if(0<u[i]<0.5):
		x[i] = 0
	else :
		x[i] = 	1
print(x)
		
		
