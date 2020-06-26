import numpy as np
import math
A=np.matrix([[1,-1],[1,1]])
B=np.matrix.transpose(A)
print(A)
print(B)
print(A+B)
print(A-B)
print(A*B)
C=np.linalg.inv(A)
print(C)
k=np.linalg.det(A)
print(k)
