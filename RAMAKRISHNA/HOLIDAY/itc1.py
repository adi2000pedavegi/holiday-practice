import numpy as np
import matplotlib.pyplot as plt
a = 2000
b = 5000
t = int((b-a)/3)

p = np.zeros(t)
for i in range(a,b):
	if(i%3==0):
		j = i-a
		p[int(j/3)] = i
		
count = 0			
for i in range(t):
	
	temp = np.zeros(4)
	temp[0] = int(p[i]/1000)
	temp1a = int(p[i]/100)
	temp[1] = temp1a%10
	temp2a = int(p[i]/10)
	temp[2] = temp2a%10
	temp[3] = p[i]%10  
	if( temp[1] == 0 or temp[1] == 1 or temp[1] == 2 or temp[1] == 3 or temp[1] == 4):
		if( temp[2] == 0 or temp[2] == 1 or temp[2] == 2 or temp[2] == 3 or temp[2] == 4):
			if( temp[3] == 0 or temp[3] == 1 or temp[3] == 2 or temp[3] == 3 or temp[3] == 4):
				if((temp[0]!=temp[1]) and (temp[0]!=temp[2]) and (temp[0]!=temp[3]) and (temp[1]!=temp[2]) and (temp[1]!=temp[3]) and (temp[2]!=temp[3])):
					print(temp)
					count = count + 1

print(count)					
				

