import numpy as np
x = int(input("enter the value:"))

y1 = oct(x)
y2 = hex(x)
y3 = chr(x)
y4 = bin(x)
print(y1)
print('\n')

print(y2)
print('\n')

print(y3)
print('\n')

print(y4)
print('\n')

k = np.eye(5)
print(k)
print('\n')
print(k.shape[0])
print(len(k))
