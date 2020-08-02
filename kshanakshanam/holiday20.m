%Simulating BPSK modulation using awgn from obtaining the variance
ebnodB = 0:10;
R = 1;
ebno = 10.^(ebnodB/10);
sigma = sqrt(1./(2*ebno));

N = 1e5;
dataIn = randi([0 1],N,1);
txsig = 1 - 2*dataIn;

for i=1:length(sigma);
    rxsig = txsig + sigma(i)*randn(N,1);
    dataOut = rxsig < 0;
    ber(i) = mean(dataIn~=dataOut);
    berth(i) = qfunc(1/sigma(i));
end
figure;
semilogy(ebnodB,ber,'k*')
figure;
semilogy(ebnodB,berth,'r*')

 