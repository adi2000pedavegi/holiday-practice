p=int(input("enter the perimeter of a triangle:"))
s=int((p/2))
print("the integer sides of the triangle are:")
i=0
for a in range(1,s):
	for b in range(1,p-a):
		c = p -(a+b)
		if (a+b>c and b+c>a and a+c>b):
			
			print(a,b,c)
			i=i+1	
		
print(i)
