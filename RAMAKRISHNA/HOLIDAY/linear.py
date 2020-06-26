import numpy as np
import matplotlib.pyplot as plt
def amma(x,y):
	n=np.size(x)
	x1=np.mean(x)
	y1=np.mean(y)
	x2=np.sum((x)**2) - n*((x1)**2)
	y2=np.sum(x*y) - n*(x1*y1)
	
	b1=float(float((y2))/float((x2)))
	b2= (y1) - (b1*x1)
	return(b1,b2)
	
def nanna(x,y,t):
	plt.scatter(x,y,color='orange',marker='o')
	
	y_opt = t[1] + t[0]*x
	plt.plot(x,y_opt,color='green')
	plt.xlabel('$x$')
	plt.ylabel('$y$')
	plt.show()
	

x = np.array([0,1,2,3,4,5,6,7,8,9])
y = np.array([1,3,2,5,7,8,8,9,10,12])
t = amma(x,y)
print(t)
nanna(x,y,t)
			
