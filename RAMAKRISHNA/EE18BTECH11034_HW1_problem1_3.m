%Question 1.3
num_trials = input("Enter the number n:");
p = input("Enter the threshold value:");
n = num_trials;
pmf = [1-p p];   %bernouli pmf
cdf = cumsum(pmf); %bernouli cdf
u = rand(n,1)      %generating random numbers which are uniformly distributed
x = zeros(n,1);
%obtaining the bernouli trials
for i=1:n
    if 0<u(i) && u(i)<cdf(1)
        x(i) = 0;
    else
        x(i) = 1;
    end
end
x = (x')'
