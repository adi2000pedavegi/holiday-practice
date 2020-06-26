file = fopen("file1.txt");
ft = "%c"; 
y = fscanf(file,ft);
x = double(y);     

for j=0:255
    freq(j+1) = sum(x==j);
end

freq = freq';
pmf = freq/(sum(freq));

rsum = 0;
for i = 1:256
    if pmf(i) ~= 0
        rsum = rsum + pmf(i)*log2(pmf(i));
    end
end
entropy = -(rsum)'
totalcharacters = sum(freq)
optimalcode = (totalcharacters*(entropy))/8

