%Implementing mu law and A law compressing and expanding technique
%A source encoding and decoding technique

%Implementing a mu law compressor and expander
%Typical mu value taken is 255 and maximum value of the input signal is also the
%input argument 
data1 = 2:2:12;
%Implementing a mu compressor
c1 = compand(data1,255,max(data),'mu/compressor');
%Implementing a mu expander
e1 = compand(c1,255,max(data),'mu/expander');

%Implementing a A law compressor and expander
%Typical A value is taken as 87.5 and maximum value of the input signal is
%also the input argument
data2 = 1:5;
%Implementing a A compressor
c2 = compand(data2,87.5,max(data2),'A/compressor');
%Implementing a A expander
e2 = compand(c2,87.5,max(data2),'A/expander');
