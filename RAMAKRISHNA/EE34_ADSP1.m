%This code contains the parts a,b,c,d

[x,Fs] = audioread('msmn1.wav');%reading the audiofile
%inializing the required variables
x = x';
Ts = 1/Fs;
L = length(x);
n = -(L/2):((L/2)-1);
t = n*Ts;
Wo = Fs/2;              %seting the reuired bandwidth
h = sinc(t*Wo);         %low pass filter impulse response

Hlp = abs(fft(h));             %low pass filter frequency response
f = (-L/2:(L/2)-1)/L;
w = 2*pi*f;
%plotting the magnitude response of low pass Hlp(w)
figure;
plot(w,fftshift(abs(Hlp)),'g')
xlabel('normalized angular frequency w')
ylabel('|Hlp(w)|')
title("Magnitude response of low pass Hlp(w) for Wo=0.5Fs")

%computing y(n) which is the output of low pass filter using fft
X = fft(x);
Y = (X).*(Hlp);
y = ifft((Y));
audiowrite('lowpass_sinc_Wo=0.5Fs.wav',y,Fs)



Hhp = (Fs/Wo) - (Hlp);          %high pass filter frequency response(a possible transformation)
Ydash = (X).*(Hhp);
%computing ydash(n) which is the output of high pass filter using fft
ydash = ifft((Ydash));
audiowrite('highpass_sinc_Wo=0.5Fs.wav',ydash,Fs)
figure;
plot(w,fftshift(abs(Hhp)),'r')
xlabel('normalized angular frequency w')
ylabel('|Hhp(w)|')
title("Magnitude response of high pass Hhp(w) for Wo=0.5Fs")

%{
Here the cut-off frequency for high pass filter is same as the low pass
filter which is Wo/2 = Fs/4
%}

