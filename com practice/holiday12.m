load mss.mat
a = mss;
b = (reshape(a',1,[]))';

M = 16;
k = log2(M);

temp1 = reshape(b,length(b)/k,k);
dataIn = bi2de(temp1);

txsig1 = pammod(dataIn,M);
txsig2 = pskmod(double(dataIn),M);
txsig3 = qammod(dataIn,M);

ebno = 0:10;
snr = ebno + 10*log10(k);

for i=1:length(snr)
    rxsig1 = awgn(txsig1,snr(i),'measured');
    rxsig2 = awgn(txsig2,snr(i),'measured');
    rxsig3 = awgn(txsig3,snr(i),'measured');
    
    demod1 = pamdemod(rxsig1,M);
    demod2 = pskdemod(rxsig2,M);
    demod3 = qamdemod(rxsig3,M);
    
    hi1 = de2bi(demod1,k);
    hi2 = de2bi(demod2,k);
    hi3 = de2bi(demod3,k);
    
    dataOut1 = hi1(:);
    dataOut2 = hi2(:);
    dataOut3 = hi3(:);
    
    ber1(i) = mean(b~=dataOut1);
    ber2(i) = mean(b~=dataOut2);
    ber3(i) = mean(b~=dataOut3);
end
semilogy(ebno,ber1,'*-')
hold on
semilogy(ebno,ber2,'*-')
hold on
semilogy(ebno,ber3,'*-')
legend({'M-PAM','M-PSK','M-QAM'},'Orientation','vertical')

    
    
    
    

