%simple design of butter worth filter
%converting zeros poles and gain format
%frequency spectrum visulaizing
[a,b] = butter(1,0.5)


[a,b] = butter(1,0.5,'low') %first input argument is order of filter and second is normalized cut-off frequency




[a,b] = butter(1,[0.1 0.6],'stop')




[a,b] = butter(1,[0.1 0.6],'bandpass')



[a,b] = butter(1,0.5,'high')


freqz(a,b)
[a,b] = butter(1,0.5,'low')


freqz(a,b)

[z,p,k] = butter(1,0.5,'high')



[z,p,k] = butter(1,0.5,'low') %returns the zeros,poles and gain



%this is completely in digital fiter domain
[z,p,k] = buttap(1)



[z,p,k] = buttap(2)



[z,p,k] = buttap(3)




%this is only in low pass analog filter domain
%default cut off frequency is fixed
[zd,pd,kd] = bilinear(z,p,k,1)%the last input argument is sampling frequency


    
    %conversion of analog domain to digital domain
    
%filterDesigner
%signalAnalyzer
%filterBuilder
%default apps for signal processing

[z,p,k] = buttap(1)



[z,p,k] = buttap(2)



[z,p,k] = buttap(3)


[z,p,k] = buttap(4)


[zd,pd,kd] = bilinear(z,p,k,4)


[z,p,k] = buttap(1)



[zd,pd,kd] = bilinear(z,p,k,4)



[z,p,k] = butter(1,0.5,'low')




