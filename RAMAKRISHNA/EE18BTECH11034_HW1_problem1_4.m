%Question 1.4

n = input("Enter the value of n:");
%in built function for generating {0,1,2,3} randomnly with required probabilities
y = randsrc(n,1,[0,1,2,3;0.1,0.3,0.1,0.5])

%inverse mapping of elements to the set {0,1,2,3}
pmf = [0.1,0.3,0.1,0.5] %pmf
cdf = cumsum(pmf)       %cdf
u = rand(n,1)           %uniformly distributed random numbers
x = zeros(n,1);
%inverse mapping
for i = 1:n
    if 0<u(i) && u(i)<cdf(1)
        x(i) = 0;
    elseif cdf(1)<u(i) && u(i)<cdf(2)
        x(i) = 1;
    elseif cdf(2)<u(i) && u(i)<cdf(3)
        x(i) = 2;
    else
        x(i) = 3;
    end
end
x = (x')'
%plotting the cdf
plot(cdf)
    

        