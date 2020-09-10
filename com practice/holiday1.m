rng default

%{
M=2;
insig = randi([0 M-1],2000,1);
tx = pskmod(insig,M,pi/M);

snr = 0:2:20;

for i=1:length(snr)
    rx = awgn(tx,snr(i));
    outsig = pskdemod(rx,M,pi/M);
    ber(i) = mean(insig~=outsig);
end
semilogy(snr,ber,'r-');
%}

M=64;
insig = randi([0 M-1],2000,1);
tx = qammod(insig,M);
snr = 0:2:20;

for i=1:length(snr)
    rx = awgn(tx,snr(i));
    outsig = qamdemod(rx,M);
    ber(i) = mean(insig~=outsig);
end
semilogy(snr,ber,'r-');