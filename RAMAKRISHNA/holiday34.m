%Simple statistics for a matrix using inbuit commands
a = readtable('dataset.xlsx')
dataset = [a.Var1,a.Var2,a.Var3,a.Var4,a.Var5]

x = dataset


d1 = x(:,1)
median(d1)
%mean,medain and mode
mean(x)
mean(x,1)
mean(x,2)
mean(d1)

median(x)
median(x,1)
median(x,2)

mode(x)
mode(d1)

range(d1)


%range,maximum and minimum
[c,d] = max(d1)

[c,d] = min(d1)


range(x)


max(x)


min(x)


sort(d1)

   
sort(x)


%standard deviaion,variance,co variane matrix,cummulative summation  
%and also co-relation coefficients
std(x)


  
var(x)


cov(x)


c1 = cumsum(x)

    

corrcoef(x)

