%Simulating BPSK modulation using awgn from obtaining the variance
%Channel coding technique n=3 repetitation code

ebnodB = 0:10;
k = 1;
n = 3;
R = k/n;
ebno = 10.^(ebnodB/10);
sigma = sqrt(1./(2*R*ebno));

N = 1e5;
inval = randi([0 1],N,1);
dataIn = 0;
%Perfroming n = 3 repetition code(channel coding)
for i=1:length(inval)
    dataIn(n*i-(n-1):n*i) = inval(i);
end

txsig = 1 - 2*dataIn;

%Performing channel demodulation and channel demodulation(hard decision
%decoding and soft decision decoding)
for i=1:length(sigma)
    rxsig = txsig + sigma(i)*randn(1,N*n);
    dataOut1 = rxsig < 0;
    for j = 1:N
        h1 = sum(dataOut1(n*j-(n-1):n*j));
        h2 = sum(rxsig(n*j-(n-1):n*j));
        if(h1>1)
            outval1(j) = 1;
        else
            outval1(j) = 0;
        end
        if(h2>0)
            outval2(j) = 0;
        else
            outval2(j) = 1;
        end
        
    end
    
    ber1(i) = mean(inval'~=outval1);
    ber2(i) = mean(inval'~=outval2);
    
end
semilogy(ebnodB,ber1,'k*')
hold on
semilogy(ebnodB,ber2,'r*')

