%Hamming encoding and decoding for various values of variance
%Obtaining the BER plot
%Constructing a (7,4) Hamming encoder of k = 4 and n = 7 bits respectively
ebnodB = 0:10;
k = 4;
n = 7;
R = k/n;

ebno = 10.^(ebnodB/10);
sigma = sqrt(1./(2*R*ebno));

%Giving a generator matrix G as the input
G = [1,0,0,0,1,0,1;0,1,0,0,1,1,1;0,0,1,0,1,1,0;0,0,0,1,0,1,1];
%Constructing a mod16 counter using 4 bits
kcodewords = dec2bin(0:15);
%Constructing channel coded(hamming code) codewords using the mod16 counter
%bits and G matrix
ncodewords = mod(kcodewords*G,2);

%Doing hard decision decoding nd soft decision decoding for that channel
N = 1e5;
for j=1:length(sigma)
    nerr1 = 0;
    nerr2 = 0;
    for i = 1:N
        dataIn = randi([0 1],1,k);
        dataInup = mod(dataIn*G,2);
        
        txsig = 1 - 2*dataInup;
        rxsig = txsig + sigma(j)*randn(1,n);
        
        demodsig = rxsig < 0;
        
        hammingdist = xor(repmat(demodsig,2^k,1),ncodewords)*ones(n,1);
        [minval,minpos] = min(hammingdist);
        dataOut1 = ncodewords(minpos,1:k);
        
        corr = (1 - 2*ncodewords)*(rxsig');
        [maxval,maxpos] = max(corr);
        dataOut2 = ncodewords(maxpos,1:k);
        
        nerr1 = nerr1 + sum(dataIn~=dataOut1);
        nerr2 = nerr2 + sum(dataIn~=dataOut2);
    end
    ber1(j) = nerr1/(k*N);
    ber2(j) = nerr2/(k*N);
end

semilogy(ebnodB,ber1,'k*')
hold on
semilogy(ebnodB,ber2,'r*')

        