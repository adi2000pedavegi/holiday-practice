%Pulse shaping of 16QAM modulated signal and computing ber
rng default
M = 16;  %Modulation order
k = log2(M);
sps = 4;   %samples per symbol indirectly no of bits per symbol and also oversampling factor for filter
filtlen = 8;

%Filtering using rcosdesign filter
%This is square root raised cosine 
FIR filter used for pulse shaping
%Filter signal energy is 1

filter = rcosdesign(0.35,filtlen,sps);  %first input is roll-off factor.
insig = randi([0 1],1e5,1);
%As using 16QAM unique symbol is constructed using 4 bits(atmost
%possibilities of mod16 digital counter)

dataInMatrix = reshape(insig,length(insig)/k,k);%converting into unique 4 bits as a symbol
dataSymbolsIn = bi2de(dataInMatrix);%converting the symbol into integer format to make it understand as a symbol
dataMod = qammod(dataSymbolsIn,M);
txsig = upfirdn(dataMod,filter,sps,1);  %Upsamples by the factor of sps

%Filter appends zeros of filtlen intially for original signal for both left and right 
snr = 0:1:20;
for i=1:length(snr)
    rxsig = awgn(txsig,snr(i),'measured');  %Adding noise additive white gaussian noise
    rxsig = upfirdn(rxsig,filter,1,sps);  %Downsamples by the factor of sps
    rxsig = rxsig(filtlen+1:end-filtlen);  %Accounting the delay caused by padding zeros
    dataSymbolsOut = qamdemod(rxsig,M);     
    dataOutMatrix = de2bi(dataSymbolsOut,k);     %Converting integer symbols to binary
    outsig = dataOutMatrix(:);                   %Appending matrix into a column vector
    ber(i) = mean(insig~=outsig);
    err(i) = biterr(insig,outsig)/length(insig);
end
semilogy(snr,ber,'*-r')
    

