%CNN-AMC github coherent communication implementation
rng default

%{
M=64;
insig = randi([0 M-1],2000,1);
tx = qammod(insig,M);
snr = 0:2:20;
for i=1:length(snr)
    coff=10^(-i/10);
    newtx=tx+sqrt(coff/2)*(randn(size(tx))+sqrt(-1)*randn(size(tx)));
    rx=newtx/sqrt((1+coff));
   
    outsig = qamdemod(rx,M);
    ber(i) = mean(insig~=outsig);
end
semilogy(snr,ber,'r-')
%}



M=4;
insig = randi([0 M-1],2000,1);
tx = pskmod(insig,M,pi/M);
snr = 0:2:20;
for i=1:length(snr)
    coff=10^(-i/10);
    newtx=tx+sqrt(coff/2)*(randn(size(tx))+sqrt(-1)*randn(size(tx)));
    rx=newtx/sqrt((1+coff));
   
    outsig = pskdemod(rx,M,pi/M);
    ber(i) = mean(insig~=outsig);
end
semilogy(snr,ber,'r-')