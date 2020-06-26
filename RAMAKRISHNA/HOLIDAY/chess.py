import numpy as np
m = int(input("enter the number of rows of the board:"))
print("\n")
n = int(input("enter the number of columns of the board:"))
a = np.zeros((m,n))
print("\n")
def amma(a,b):
	if((a+b)%2==0):
		return 1
	else:
		return 0
			
for i in range(0,m): 
	for j in range(0,n):
		a[i][j] = amma(i,j) 
	print("\n")
print(a)
		
		
			
				
					
						
							
								
									
											
		
	
		
			
			
			
			
			
			


			
				
			
