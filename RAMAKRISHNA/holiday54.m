%performing median filtering for an analog signal using for nth order
fs = 100;%sampling frequency
t = 0:1/fs:1;
x = sin(2*pi*t*3)+0.25*sin(2*pi*t*40);
y = medfilt1(x,10);%default no number input argument is 3 now it is 10th order filter 
%y = medfilt1(x) gives third order filter
plot(t,x,'r')
hold on 
plot(t,y,'g')

