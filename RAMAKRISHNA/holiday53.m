%simple laplave transforms
syms a t
f = exp(-a*t);
laplace(f)
 

laplace(sin(a*t))
 

 
laplace(cos(a*t))
 

 
laplace(dirac(t-3))
 

syms f(t) 
d = diff(f(t),t)
 

laplace(d)
 

 
syms f(t)
i = int(f(t),t)
 

laplace(i)
 

