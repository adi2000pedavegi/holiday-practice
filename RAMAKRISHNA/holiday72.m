%information sciences assignment sample test code
%Question 1.2 lo b
sum = 0;
n = input('Enter the value of n:');
m = input('Enter the value of m:');
%n = 10;
%m = 5;
p = 0.3;
for i=0:m
    sum = sum + (nchoosek(n,i))*(p^i)*((1-p)^(n-i));
end
disp(sum)

%Question 1.3
pmf = [p 1-p];
cdf = cumsum(pmf);
u = rand(n,1)
x = zeros(n,1);
for i=1:n
    if 0<u(i) && u(i)<cdf(1)
        x(i) = 0;
    else
        x(i) = 1;
    end
end
x = (x')'
