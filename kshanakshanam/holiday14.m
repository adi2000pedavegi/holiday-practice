%Implementing FSK(Frequency shift keying) modulation 
%Unlike PAM,PSK,QAM this has constellation points in the vector span
%For M-FSK(the constellation diagram lie over M dimensions)

rng default
M = 4;
k = log2(M);
Fs = 32; %Sampling frequency(fo)
sps = 8; %Samples per symbol(modulation according to symbols each symbol is transmitted for sps number of samples)
freqsep = 10; %Frequency separation(between two succesive frequencies deltaf)


dataIn = randi([0 M-1],1250,1);
txsig = fskmod(dataIn,M,freqsep,sps,Fs);

ebno = 0:20;
snr = ebno + 10*log(k) - 10*log(sps);
for i = 1:length(snr)
    rxsig = awgn(txsig,snr(i));
    dataOut = fskdemod(rxsig,M,freqsep,sps,Fs);
    ber(i) = mean(dataIn~=dataOut);
end
semilogy(ebno,ber,'*-')


