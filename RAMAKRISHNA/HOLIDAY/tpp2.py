import math
x1 = int(input("enter the number 1:"))
x2 = int(input("enter the number 2:"))
x3 = int(input("enter the number 3:"))

y = abs(x1)
list1 = [x1,x2,x3]
print(max(list1))
print(min(list1))

print(math.hypot(x1,x2))
