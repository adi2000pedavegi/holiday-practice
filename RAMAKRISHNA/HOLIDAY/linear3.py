import numpy as np
import matplotlib.pyplot as plt
import math

A=np.matrix([[0,1],[1,1],[2,1],[3,1],[4,1],[5,1],[6,1],[7,1],[8,1],[9,1]])
B=np.matrix([[1],[3],[2],[5],[7],[8],[8],[9],[10],[12]])
P=np.linalg.inv((A.T)*(A))
Q=(P)*(A.T)*(B)
print(float(Q[0]))
print(float(Q[1]))
r = Q[0]
s = Q[1]

x = (0,1,2,3,4,5,6,7,8,9)
y = np.array([1,3,2,5,7,8,8,9,10,12])
y1 = r*x[0] + s
y2 = r*x[1] + s
y3 = r*x[2] + s
y4 = r*x[3] + s
y5 = r*x[4] + s
y6 = r*x[5] + s
y7 = r*x[6] + s
y8 = r*x[7] + s
y9 = r*x[8] + s
y10 = r*x[9] + s


plt.plot(x,y,color='orange',marker='o')
plt.plot(x[0],y1,'o')
plt.plot(x[1],y2,'o')
plt.plot(x[2],y3,'o')
plt.plot(x[3],y4,'o')
plt.plot(x[4],y5,'o')
plt.plot(x[5],y6,'o')
plt.plot(x[6],y7,'o')
plt.plot(x[7],y8,'o')
plt.plot(x[8],y9,'o')
plt.plot(x[9],y10,'o')
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.grid()
plt.axis('equal')
plt.show()

