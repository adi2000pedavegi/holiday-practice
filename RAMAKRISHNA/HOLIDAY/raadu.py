import numpy as np
from mpmath import *
a = input("enter the number:")

#evaluating gamma((n+1)/2)
def gamma(a):
	if(a%2 == 0):
		return ((factorial(a))/((factorial(a/2.0))*(2**a)))*np.sqrt(np.pi)
	else:
		return factorial((a-1)/2)
		
			
		
		
		
b = gamma(a)
print(b)
