%IDP Assignment test code
load binary_image.mat  
snr = input("Enter the value of required snr in dB:")
a = MonaLisa;                                           
dataIn = reshape(a',1,[]);
dataIn = double(dataIn);

%tx = pskmod(dataIn,4);
%tx = qammod(dataIn,4);
tx = pammod(dataIn,4);
rx = awgn(tx,snr,'measured');
%dataOut = pskdemod(rx,4);
%dataOut = qamdemod(rx,4);
dataOut = pamdemod(rx,4);
biterror = sum(dataIn~=dataOut)

x = [-10,-5,0,5,10];
y1 = [3798,2854,1621,523,27];
y2 = [3600,2395,870,64,0];
%y1 = [6708,5465,3187,726,15];
%y2 = [6744,5433,3247,824,20];
%y3 = [6647,5788,4310,2289,455];
semilogy(x,y1)
hold on
semilogy(x,y2)
hold on
%semilogy(x,y3)
legend({'4-PAM','4-PSK'},'Location','northwest','Orientation','vertical')