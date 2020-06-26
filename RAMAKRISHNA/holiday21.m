%mathematics
syms x n
int(x^n)    %simple indefinte integral
a=int(x,4,9) %simple definite integral
disp(double(a))
f = (x^2)*(cos(x))
b = int(f,-4,9)
ezplot(f,[-4,9])
disp(b)

%Computing roots of n degree polynomial
s1 = roots([1,-7,12])
disp(s1(1))
