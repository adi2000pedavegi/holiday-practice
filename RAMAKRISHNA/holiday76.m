%information sciences assignment sample test code
file = fopen("file2.txt");
ft = "%c"; 
y = fscanf(file,ft);
x = double(y);     

for j=0:255
    z1(j+1) = sum(x==j);
end

z1 = z1';

h = z1/(sum(z1));
rsum = 0;
for i = 1:256
    if h(i) ~= 0
        rsum = rsum + h(i)*log2(h(i));
    end
end
rqsum = -(rsum)';
rqsum
tc = sum(z1)
optimalcode = (tc*(rqsum))/8


        