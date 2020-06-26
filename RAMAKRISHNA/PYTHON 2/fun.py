import numpy as np

a = (input("enter the string 1:"))
b = input("enter the string 2:")
c = (input("enter the string 3:"))
r = eval(a+b+c)
print(r)

dataset = [1,5,7,2,6,7,8,2,5,26,8,2,6,13]
def movingaverage(values,window):
	weights = np.repeat(1.0,window)/window
	smas = np.convolve(values,weights,'valid')
	return smas


print (movingaverage(dataset,3))	
