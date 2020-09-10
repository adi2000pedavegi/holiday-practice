%Modulating the input data with QPSK and then passing into a OFDM(Orhogonal
%Frequency Division Multiplexing) and oserving bit error rate

M = 4;
k = log2(M);
fftlen = 128; %Number of sub-carriers of OFDM(usually fftlength)
cplen = 32;  %Cyclic prefix length 

%Constructing modulator objects of both QPSK and OFDM
mod1 = comm.QPSKModulator('BitInput',true);
demod1 = comm.QPSKDemodulator('BitOutput',true);

mod2 = comm.OFDMModulator('FFTLength',fftlen,'CyclicPrefixLength',cplen);
demod2 = comm.OFDMDemodulator('FFTLength',fftlen,'CyclicPrefixLength',cplen);
%Additive white gaussian noise is used as channel
channel = comm.AWGNChannel('NoiseMethod','Variance','VarianceSource','Input port');

numdc = info(mod2).DataInputSize(1);
bitlen = [k*numdc 1]; 

dataIn = randi([0 1],bitlen);
mod1sig = mod1(dataIn);
txsig = mod2(mod1sig);
inputpower = 10*log10(var(txsig));

ebno = (0:10)';
for i = 1:length(ebno)
    snr = ebno(i) + 10*log10(k*numdc/fftlen);
    noisevar = 10.^(0.1*(inputpower-snr));
    rxsig = channel(txsig,noisevar);
    mod2sig = demod2(rxsig);
    dataOut = demod1(mod2sig);
    ber(i) = mean(dataIn~=dataOut);
end
semilogy(ebno,ber,'*-')

    
    
