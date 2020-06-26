import numpy as np

a = np.array([1,2,-4,-7,8,6,-2,8])
print(a)
polecount = 0
for i in range(len(a)-1):
	if((a[i]>0 and a[i+1]<0) or (a[i]<0 and a[i+1]>0)):
		polecount = polecount + 1
	
print(polecount)
		
