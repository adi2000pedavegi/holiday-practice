%transfer function and laplave transforms
s = tf('s');
t = 1/((s^2)+(0.2*s)+1)


syms t
laplace(t)
 

 
laplace(sin(t))
 

syms s a b
f = (b)/((s+a)^2 + b^2);
ilaplace(f)
 

num = [2 1];
den = [4 3 2];
G = tf(num,den)


 
 