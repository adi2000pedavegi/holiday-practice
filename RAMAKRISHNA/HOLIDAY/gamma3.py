import numpy as np
import matplotlib.pyplot as plt
import math
from mpmath import *
l = input("enter the number:")

#evaluating gamma((n+1)/2)
def lovedebba(l):
	if(l%2 == 0):
		return ((factorial(l))/((factorial(l/2.0))*(2**l)))*np.sqrt(np.pi)
	else:
		return factorial((l-1)/2)
		
			
		
		
		
v = lovedebba(l)
print(v)

a = 0.5
b = 0.5
mu = (a*b)
var = (a)*(b**2)
sigma = np.sqrt(var)


s = np.random.gamma(a,b,1000)
count,x,ignored = plt.hist(s,20,normed=True)
y = (((x)**a-1)*(np.exp((-x)/b)))/(v*(b**a))

print(mu)
print(sigma)
print(np.mean(s))
print(np.std(s))


plt.plot(x,y,color = 'green')
plt.grid()
plt.xlabel("$x$")
plt.ylabel('$y$')
plt.show()

