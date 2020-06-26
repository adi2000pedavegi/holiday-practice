import numpy as np
import math
print("enter the numbers:")

c = np.zeros((10))
z = np.size(c)

for i in range(z):
	c[i] = int(input())
	
print(max(c))
print(min(c))
print(np.mean(c))
print(np.std(c))

