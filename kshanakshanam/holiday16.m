%Performing APSK(Amplitude Phase Shift Keying) for the input random data
%stream
rng default

%Performing 32-APSK without any phase offset
%{
M = [16 16];
R = [0.6 1.2];
modorder = sum(M);

dataIn = randi([0 modorder-1],1250,1);
txsig = apskmod(dataIn,M,R);

ebno = 0:20;
snr = ebno + 10*log10(log2(modorder));
for i=1:length(snr)
    rxsig = awgn(txsig,snr(i),'measured');
    dataOut = apskdemod(rxsig,M,R);
    ber(i) = mean(dataIn~=dataOut);
end
semilogy(ebno,ber,'*-')
%}

%Performing 64-APSK without some phase offset(default phase offset)
M = [8 12 20 24];
R = [0.8 1.2 2 2.5];
phaseoffset = [pi/M(1),pi/M(2),pi/M(3),pi/M(4)];
modorder = sum(M);

dataIn = randi([0 modorder-1],1250,1);
txsig = apskmod(dataIn,M,R,phaseoffset);

ebno = 0:20;
snr = ebno + 10*log10(log2(modorder));
figure;
scatterplot(txsig);
for i=1:length(snr)
    rxsig = awgn(txsig,snr(i),'measured');
    dataOut = apskdemod(rxsig,M,R,phaseoffset);
    ber(i) = mean(dataIn~=dataOut);
    scatterplot(rxsig);
end
figure;
semilogy(ebno,ber,'*-')

