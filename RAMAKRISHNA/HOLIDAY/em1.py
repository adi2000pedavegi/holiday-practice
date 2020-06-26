import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
from mpl_toolkits.mplot3d import axes3d
def aditya1(x, y):
    return (x ** 2 + y ** 2)
def aditya2(x, y):
    return (x ** 2 - y ** 2) 
x = np.linspace(-10,10,21)
y = np.linspace(-10,10,21)

X, Y = np.meshgrid(x,y)
Z1 = aditya1(X,Y)
Z2 = aditya2(X,Y)

fig = plt.figure()
ax = fig.add_subplot(1,2,1,projection='3d')
ax.plot_surface(X, Y, Z1, rstride=1, cstride=1,cmap='winter')
ax = fig.add_subplot(1,2,2,projection='3d')
ax.plot_surface(X, Y, Z2, rstride=1, cstride=1,cmap='winter')
plt.show()
