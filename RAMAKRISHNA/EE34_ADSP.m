%Question 4:

[data, FsIn] = audioread('msmn1.wav');  %reading the audio file given in previous homework
Fs = FsIn;
Fnotch = 1e4;  % Notch Frequency

n = 0:length(data)-1;
noisetone = cos(2*pi*Fnotch*n/Fs);     %pure tone
datain = data + noisetone';            %adding pure tone to original signal
audiowrite('input_noise+original.wav',datain,Fs);
%soundsc(datain,Fs)

%filtering using notch
wo = Fnotch*2/Fs;
bw = wo/35;                 %setting quality factor to 35(a parameter in notch design)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
[b, a] = iirnotch(wo,bw);
dataout1 = filter(b,a,datain);
audiowrite('output_notch_filter.wav',dataout1,Fs);
%soundsc(dataout1,Fs)


%implemeting moving average filter y(n) = x(n)+x(n-1)/2
dataout2 = 0;
for i=1:length(datain)
    if(i==1)
        dataout2(i) = datain(i)/2;
    else
        dataout2(i) = (datain(i)+ datain(i-1))/2;
    end
end
audiowrite('output_movingmean_filter.wav',dataout2,Fs);
%soundsc(dataout2,Fs)

