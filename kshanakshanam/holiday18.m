rng default
%Perfroming modulation for fading channels(rician and rayleigh)
%We observe that ber plot is not of actual convention(these are normal
%pratical wireless channels where transmitting information depends on the time

M = 8;
dataIn = randi([0 M-1],1250,1);
insig = pskmod(dataIn,M,pi/M);


channel1 = comm.RicianChannel('SampleRate',1e6, ...
    'PathDelays',[0 0.5 1.2]*1e-6, ...
    'AveragePathGains',[0.1 0.5 0.2], ...
    'KFactor',10, ...
    'MaximumDopplerShift',50, ...
    'NormalizePathGains',true);

channel2 = comm.RayleighChannel('SampleRate',1e6, ...
    'PathDelays',[0 0.5 1.2]*1e-6, ...
    'AveragePathGains',[0.1 0.5 0.2], ...
    'MaximumDopplerShift',50, ...
    'NormalizePathGains',true);

txsig1 = channel1(insig);
txsig2 = channel2(insig);
ebno = 0:20;
snr = ebno + 10*log10(log2(M));
for i=1:length(snr)
    rxsig1 = awgn(txsig1,snr(i),'measured');
    rxsig2 = awgn(txsig2,snr(i),'measured');
    
    dataOut1 = pskdemod(rxsig1,M,pi/M);
    dataOut2 = pskdemod(rxsig2,M,pi/M);
    
    ber1(i) = mean(dataIn~=dataOut1);
    ber2(i) = mean(dataIn~=dataOut2);
end
semilogy(ebno,ber1,'*-g')
hold on
semilogy(ebno,ber2,'*-r')

    