import numpy as np
a = np.array([2,9,3])
b = np.array([8,6,2])
c = np.bitwise_and(a,b)
d = np.bitwise_or(a,b)
e = np.bitwise_xor(a,b)
f = np.invert(e)
print(c)
print(d)
print(e)
print(f)


