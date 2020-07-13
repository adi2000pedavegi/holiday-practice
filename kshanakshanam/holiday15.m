%Performing differential phase shift keying(same as psk but has
%differential phase in each case to previous case)

%Performing both DBPSK and DQPSK

rng default
%{
dataIn = randi([0 1],1250,1);
txsig = dpskmod(dataIn,2);
ebno = 0:20;
snr = ebno;
for i=1:length(snr)
    rxsig  = awgn(txsig,snr(i),'measured');
    dataOut = dpskdemod(rxsig,2);
    ber(i) = mean(dataIn~=dataOut);
end
semilogy(ebno,ber,'*-')
%}

dataIn = randi([0 3],1250,1);
txsig = dpskmod(dataIn,4);
ebno = 0:20;
snr = ebno + 10*log10(2);
for i=1:length(snr)
    rxsig  = awgn(txsig,snr(i),'measured');
    dataOut = dpskdemod(rxsig,4);
    ber(i) = mean(dataIn~=dataOut);
end
semilogy(ebno,ber,'*-')
