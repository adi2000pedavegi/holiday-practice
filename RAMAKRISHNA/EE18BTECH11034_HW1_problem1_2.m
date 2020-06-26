file = fopen("aditya1.txt");
ft = "%s";
y = fscanf(file,ft);
x = double(y);
temp1 = [97:122];
temp2 = [65:90];
r = (char(temp1))';
s = (char(temp2))';
for i=97:122
    z1(i-96) = sum(x==i);
end

z1 = z1';

for i=65:90
    z2(i-64) = sum(x==i);
end

z2 = z2';
table(r,z1)
table(s,z2)