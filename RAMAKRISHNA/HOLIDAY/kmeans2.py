import numpy as np
import matplotlib.pyplot as plt
import cv2
X = np.random.randint(10,35,(25,2))
Y = np.random.randint(55,70,(25,2))
Z = np.vstack((X,Y))
Z = np.float32(Z)


criteria = (cv2.TERM_CRITERIA_EPS + cv2.TERM_CRITERIA_MAX_ITER, 10, 1.0) 
ret,label,center = cv2.kmeans(Z,2,None,criteria,10,cv2.KMEANS_RANDOM_CENTERS) 


A = Z[label.ravel()==0]
B = Z[label.ravel()==1]
plt.scatter(A[:,0],A[:,1],color = 'green')
plt.scatter(B[:,0],B[:,1],color = 'orange')
plt.scatter(center[:,0],center[:,1],color = 'red')
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.grid()
plt.show()
  
