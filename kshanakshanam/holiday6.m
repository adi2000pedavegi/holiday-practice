rng default
M = 16;    %Modulating using 16-QAM 
k = log2(M);   %No.of bits per symbol
numlen  = 1e5;
rolloff = 0.35;  %roll-off factor for pulse shaping filter
filtlen = 8;
sps = 4;  %Samples per symbol which is same as k(Also Upsamlpling and Downsampling factor in pulse shaping filter)


insig = randi([0 1],numlen,1);
%Applying Convolutional encoding(a technique of forward error correcting)
%Setting coeffients and parameters of encoder of coderate 2/3
coderate = 2/3;  %Every 2 bits convert into 3 bits(K/N where K is the chanel coder input and N is channel coder output)
conlen = [5 4];
polycoeff = [23 35 0;0 5 13]; %Generator polynomial

poly = poly2trellis(conlen,polycoeff);
%Encoded signal(Convolutional encoding) having length 2:3(For every 2 bits there will be 3 bits)
encodsig = convenc(insig,poly);
dataInMatrix = reshape(encodsig,length(encodsig)/k,k);  %Reshaping bit stream into matrix having each row 4 bits(k)
dataSymbolsIn = bi2de(dataInMatrix);  %Converting 4 bits in a row to a symbol
dataMod = qammod(dataSymbolsIn,M);    %Modulation using 16-QAM
%Applying the pulse shaping filter
filter = rcosdesign(rolloff,filtlen,sps);
txsig = upfirdn(dataMod,filter,sps,1); %Applying pulse shaping and upsampling by a factor of sps


%asnr variable is actual snr which is done under no channel coding
asnr = 0:20;
for i = 1:length(asnr)
    snr = 0;
    snr = asnr(i) + 10*log10(coderate);
    rxsig = awgn(txsig,snr,'measured');
    downrxsig = upfirdn(rxsig,filter,1,sps);  %Apply pulse shaping and down sample the filter
    acrxsig = downrxsig(filtlen+1:end-filtlen);%Demodulating and finally converting into bit-stream
    datadeMod = qamdemod(acrxsig,M);
    dataBitsOut = de2bi(datadeMod);
    dataOutMatrix = dataBitsOut(:);
    %Applying viterbi decoding as channel decoder
    %Viterbi decoding accounts a delay in channel decoder
    outsig = vitdec(dataOutMatrix,poly,16,'cont','hard');  %Trace back delay depth is assumed to be 16
    %Here already we removed delay caused by the filter,now we have to
    %remove delay caused by channel decoder
    
    %This accounts traceback delay depth times input channel streams(here
    %i.e 2 and 2 times 16 which is 32)
    ber(i) = mean(insig(1:end-32)~=outsig(32+1:end));  %Final 32 samples are lately sent and first 32 samples are lately received
end
effsnr = asnr + 10*log10(coderate);
semilogy(effsnr,ber,'r*')
    
    



