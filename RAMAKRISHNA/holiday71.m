%probability distributions
%cdf command
%{
x = -2:2
y = cdf('Normal',x,0,1)
plot(y)
%}

%{
x = -100:100;
y = cdf('Normal',x,0,1);
plot(y)
%}

x = randi([0 10],100,1);
u = 0:5;
z = cdf('Poisson',x,2);

p = [0.1 0.3 0.5 0.7 0.9];
x = icdf('Normal',p,0,1)



y = icdf('Poisson',p,2)


