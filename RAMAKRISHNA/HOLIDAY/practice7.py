import cmath
a = int(input("enter the number 1:"))
b = int(input("enter the number 2:"))
z = complex(a,b)
print(z)
print(z.real)
print(z.imag)
print(cmath.phase(z))
e1 = cmath.polar(z)
print(e1)
e2 = cmath.rect(e1[0],e1[1])
print(e2)



