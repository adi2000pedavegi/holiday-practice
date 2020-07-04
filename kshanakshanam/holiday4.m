%Employing channel coding along with awgn
%Channel coding with reed-solomon encoder (15,9) RS Encoder and Decoder
rng default
M = 16; %Modulation order
K = 9;  %Actual message bits
N = 15; %Channel coded message bits

%Creating objects for encoder,decoder,modulator and demodulator
rsen = comm.RSEncoder('CodewordLength',N,'MessageLength',K,'BitInput',true);
pskmd = comm.PSKModulator('ModulationOrder',M,'BitInput',true);

rsdec = comm.RSDecoder('CodewordLength',N,'MessageLength',K,'BitInput',true);
pskdmd = comm.PSKDemodulator('ModulationOrder',M,'BitOutput',true);

%coderate is ratio of messagelength to codelength
%bitspersym is unique number of bits required per modulation order(0,1)
coderate = K/N;
bitspersym = log2(M);

%fit any random uncoded noise(snr)
uncodedebno = 3;
%encoding adds some more noise to uncoded data as no of bits are raised
%that factor of eb/no is the coderate
codedebno = uncodedebno + 10*log10(log2(M)*coderate);

%applying awgn
channel = comm.AWGNChannel('BitsPerSymbol',bitspersym);
channel.EbNo = codedebno;



insig = randi([0 1],360,1);
ensig = rsen(insig);
txsig = pskmd(ensig);
rxsig = channel(txsig);
demodsig = pskdmd(rxsig);
outsig = rsdec(demodsig);
ber = mean(insig~=outsig);

    
    

