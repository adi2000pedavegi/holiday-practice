import numpy as np
import matplotlib.pyplot as plt
X = np.random.randint(10,35,(25,2))
Y = np.random.randint(55,70,(25,2))
Z = np.vstack((X,Y))
Z = Z.reshape((50,2))
Z = np.float32(Z)
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.grid()
plt.hist(Z,256,[0,256])
plt.show()

