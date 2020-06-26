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

k = 2
mu = k
var = 2*k
sigma = np.sqrt(var)


s = np.random.chisquare(k,1000)
count,x,ignored = plt.hist(s,20,normed=True)
y = (((x)**((k/2)-1))*(np.exp(-x/2)))/(((2)**(k/2))*(v))

print(mu)
print(sigma)
print(np.mean(s))
print(np.std(s))


plt.plot(x,y,color = 'green')
plt.grid()
plt.xlabel("$x$")
plt.ylabel('$y$')
plt.show()


