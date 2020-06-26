%Switch conditional statements and simple mathematics
i = input('enter the number:');
if i > 5
    disp('aditya')
end
income = i;
if income < 9275
    rate = 0.10
elseif income<37650
    rate = 0.15
elseif income < 91150
    rate = 0.25
else 
    rate = 0.28
end

 x = 2;
switch x
    case 1
        disp('x is 1')
    case 2
        disp('x is 2')
    otherwise
        disp('x is neither 1 nor 2')
end
for i = 11:14
disp(i)
end
    

for i=12:15
disp(i.^2)
end
  

n = 102;
fib = ones(1,n);

for k=3:n
fib(k) = fib(k-1) + fib(k-2);

end
a = gamma(5)

a = gamma(11/2)


b = beta(3,3)



b = beta(0.5,0.5)


