%Question 1.6
file = fopen("inputfile.txt");
ft = "%s";  %reading the text in one complete string
y = fscanf(file,ft);
x = double(y);    %converting charecters to numbers using ASCII 
temp1 = [97:122];  %initializing a to z in ASCII 
temp2 = [65:90];   %initializing A to Z in ASCII 
%converting into charecters
r = (char(temp1))';   
s = (char(temp2))';

%obtaining the frequency of the elements in lower case alphabets

for i=97:122
    z1(i-96) = sum(x==i);
end

z1 = z1';
%obtaining the frequency of the elements in upper case alphabets

for i=65:90
    z2(i-64) = sum(x==i);
end

z2 = z2';
table(r,z1)
table(s,z2)

%obtaining the pmf
g = z1/(sum(z1));
h = z2/(sum(z2));
table(r,g)
table(s,h)


