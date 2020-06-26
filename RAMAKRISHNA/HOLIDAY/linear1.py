import cvxpy as cp
from sympy import *
import numpy as np
import matplotlib.pyplot as plt


a = cp.Variable((2,1))
A=np.matrix([[0,1],[1,1],[2,1],[3,1],[4,1],[5,1],[6,1],[7,1],[8,1],[9,1]])
B=np.matrix([[1],[3],[2],[5],[7],[8],[8],[9],[10],[12]])
f = a[0] + a[1]


obj = cp.Maximize(f)
constraints = [(A)*a <= B]

cp.Problem(obj,constraints).solve()
print(float(a[0].value))
print(float(a[1].value))

x = (0,1,2,3,4,5,6,7,8,9)
y = (1,3,2,5,7,8,8,9,10,12)
y_opt = ((a[1].value)*x) + (a[0].value)
plt.plot(x,y,color='orange',marker='o')
plt.plot(x,y_opt,color='green')
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.grid()
plt.axis('equal')
plt.show()




