%Performing frequency modulation and demodulation 
fs = 1000; %Sampling frequency
fc = 200; %carrier frequency(should obey nyquist sampling theorem)
fdiv = 50; %This is same as deltaf

%Creating input signal which is time domain signal(having multiple
%frequencies)
%Here the input time domain signal frequencies are 50 Hz and 100 Hz
n = 0:1000;
Ts = 1/fs;
t = n*Ts;
x = sin(2*pi*50*t) + sin(2*pi*100*t);
%Performing modulation and demodulation
y = fmmod(x,fc,fs,fdiv);
z = fmdemod(y,fc,fs,fdiv);

plot(t,x,'c')
hold on
plot(t,y,'g')
hold on
plot(t,z,'r')
legend({'Original Signal','Modulated signal','Demodulated signal'},'Orientation','vertical')
