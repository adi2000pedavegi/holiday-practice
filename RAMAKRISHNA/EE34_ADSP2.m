%This code contains the part f and part g

[x,Fs] = audioread('msmn1.wav');    %reading the audiofile
%inializing the required variables
Ts = 1/Fs;
x = x';
L = length(x);
n = 0:(L-1);
%coefficients of numerator and denominator of given H(z)
num = [0.1,0];
den = [1,-0.9];
G = tf(num,den,-1);
%plotting the pole-zeroplot
figure;
zplane(num,den)

h = impz(num,den,L);   %impulse response of low pass filter
%h = 0.1*(0.9).^n      expression of h(n)
h = h';
Hlp = fft(h);            %low pass filter frequency response
f = (-L/2:(L/2)-1)/L;
w = f*2*pi;
%plotting the magnitude response of low pass Hlp(w)
figure;
plot(w,fftshift(abs(Hlp)),'g')
xlabel('normalized angular frequency w')
ylabel('|Hlp(w)|')
title("Magnitude response of low pass Hlp(w)")

%computing y(n) which is the output of low pass filter using fft
X = fft(x);
Y = (X).*(Hlp);
y = ifft((Y));
audiowrite('lowpass_H(z).wav',y,Fs)


hhp = (-1).^n.*(h);       %impulse response of high pass filter
Hhp = fft(hhp);           %high pass filter frequency response
%computing ydash(n) which is the output of high pass filter using fft
Ydash = (X).*(Hhp);
ydash = ifft((Ydash));
%plotting the magnitude response of high pass Hhp(w)
figure;
plot(w,fftshift(abs(Hhp)),'r')
xlabel('normalized angular frequency w')
ylabel('|Hhp(w)|')
title("Magnitude response of high pass Hhp(w)")
audiowrite('highpass_H(z).wav',ydash,Fs)
