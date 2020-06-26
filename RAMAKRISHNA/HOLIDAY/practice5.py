import numpy as np
import matplotlib.pyplot as plt
va = 2+3j
vb = np.conj(va)
print(vb)
k = 2
x = np.linspace(0,np.pi/2.0,100)
y = np.convolve(np.sin(x),np.sin(x))
z = np.convolve(np.exp(x),np.exp(x))
t = np.convolve(k,k)
plt.plot(t)
#plt.plot(z)
#print(y.size)
#plt.plot(y)
plt.show()

