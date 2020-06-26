data = readtable('india.xlsx')
d1 = data.Match1
%Normalizing a vector using in buit command
d1 = normalize(d1)
d2 = data.Match2
d2 = normalize(d2)

d3 = d1-mean(d1)/std(d1)
d4 = d2-mean(d2)/std(d2)
%Normalizing using formual x-mu/sigma where mu is mean and sigma is
%standard deviation of vector x respectively

d1 - d3
d2 - d4
%We observe both are same to some precise extent

    

    