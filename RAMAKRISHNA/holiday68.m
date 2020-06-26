%Fourier transform(discrete)
x = 1:6
y = fft(x)
y = fft(x,6) %n-point DFT


t = 0:0.01:1;
x = sin(2*pi*t);
y = fft(x);
figure;
plot(t,x)
figure;
plot(t,y)
figure;
plot(t,abs(y))
figure;
plot(t,angle(y))

x = 1:5

y = fft(x)
y = fft(x,3)
x = ifft(y)

% x(n) and y(n) are discrete sequences 
%computing the DFT and IDFT
t = 0:0.1:5;
size(t)

x = ones(1,51);
y = conv(x,x);
figure;
plot(t,x)
figure;
t = 0:0.1:10;
plot(t,y)
%computes the convolution of two sequences


