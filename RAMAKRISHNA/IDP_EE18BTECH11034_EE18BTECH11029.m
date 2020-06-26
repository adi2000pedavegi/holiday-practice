%This code simulates BER and error bits for required snr values 
%Gaussian noise variance is fs*No/2


load binary_image.mat                                   %loading the given image
%imshow(MonaLisa,[0 1])
snr = input("Enter the value of snr ratio required in dB:");  %taking the value of SNR as run time input

a = MonaLisa;                                           %storing the values of MonaLisa into a variable
b = reshape(a',1,[]);                                   %reshaping to convert matrix into 1D array i.e 0 and 1 bit stream

T = 0.000001;                                           %defining the interval time
fc = 2000000;                                           %defining carrier frequency
fs = 50000000;                                          %defining sampling frequency
Ts = 1/fs;                                              

time = (length(b))*(T/2);                               %total time required for transmission of message
samples = fs*time;                                      %generating required number of samples

%intializing all variables to zeros
y = zeros(1,11000);                                     
x = 0;                                              
s = 0;                                                                                            
d1 = 0;                                                
d2 = 0;                                                 
d3 = 0;                                                 
d4 = 0;                                                 
n = 0;                                                  

%mapping x 1D-array from b 1D-array
for j=1:length(b)                                       
    if(b(j)==1)                                         
        x(j) = -1;
    else                                                
        x(j) = 1;
    end
end

for i = 1:5500                                          %generating s values
    n((((i-1)*(T*fs))+1):(i*(T*fs))) = ((i-1)*(T*fs)):((i*(T*fs))-1);
    s((((i-1)*(T*fs))+1):(i*(T*fs))) = (x((2*i)-1))*(cos(2*pi*fc*n((((i-1)*(T*fs))+1):(i*(T*fs)))*Ts)) + (x(2*i))*(sin(2*pi*fc*n((((i-1)*(T*fs))+1):(i*(T*fs)))*Ts));
end

eavg = (((sum(s.^2))/length(s)))*T;                      %calculating average energy 
eb = eavg/2;                                            %calculating energy per bit 
No = noise(eb,snr);                                     %calculating noise strength which performs through noise function




w = random('norm',0,sqrt((fs*No)/2),1,length(s));            %generating gaussian noise
r = s + w;                                              %adding gaussian noise and generating r signal

%generating unique s(i) corresponding to constellation of 4-QAM                                                      
s1 = cos(2*pi*fc*Ts*(0:(length(s)-1))) + sin(2*pi*fc*Ts*(0:(length(s)-1)));
s2 = cos(2*pi*fc*Ts*(0:(length(s)-1))) - sin(2*pi*fc*Ts*(0:(length(s)-1)));
s3 = -cos(2*pi*fc*Ts*(0:(length(s)-1))) + sin(2*pi*fc*Ts*(0:(length(s)-1)));
s4 = -cos(2*pi*fc*Ts*(0:(length(s)-1))) - sin(2*pi*fc*Ts*(0:(length(s)-1)));

for i = 1:5500                             %calculating distance from r to unique s(i)
    
    d1(i) = sqrt(sum(((r((((i-1)*(T*fs))+1):(i*(T*fs))))-(s1((((i-1)*(T*fs))+1):(i*(T*fs))))).^2));
    d2(i) = sqrt(sum(((r((((i-1)*(T*fs))+1):(i*(T*fs))))-(s2((((i-1)*(T*fs))+1):(i*(T*fs))))).^2));
    d3(i) = sqrt(sum(((r((((i-1)*(T*fs))+1):(i*(T*fs))))-(s3((((i-1)*(T*fs))+1):(i*(T*fs))))).^2));
    d4(i) = sqrt(sum(((r((((i-1)*(T*fs))+1):(i*(T*fs))))-(s4((((i-1)*(T*fs))+1):(i*(T*fs))))).^2));
    
    %using minimum distance decoder
    if d1(i)<d2(i) && d1(i)<d3(i) && d1(i)<d4(i)
        y((2*i)-1) = 0;
        y(2*i)     = 0;
        
    elseif d2(i)<d1(i) && d2(i)<d3(i) && d2(i)<d4(i)
        y((2*i)-1) = 0;
        y(2*i)     = 1;
        
       
    elseif d3(i)<d1(i) && d3(i)<d2(i) && d3(i)<d4(i)
        y((2*i)-1) = 1;
        y(2*i)     = 0;
        
        
    elseif d4(i)<d1(i) && d4(i)<d2(i) && d4(i)<d3(i)
        y((2*i)-1) = 1;
        y(2*i)      = 1;
        
        
        
    end
end

%assigning the values to the bits
errorbits = sum(b~=y)                       %no of wrongly decoded or demodulated bits
BER = errorbits/length(b)                   %calculating bit error rate
approxBER = qfunc(sqrt((2*eb)/(No)))          %verifying with the Q function

%generating the image
receivedimage = reshape(y',[100,110]);
receivedimage = receivedimage';
imshow(receivedimage,[0 1])

%function for evaluating noise strength
function v = noise(v1,v2)
v = v1/(10^(v2/10));
end