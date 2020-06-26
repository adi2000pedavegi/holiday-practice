%designs a Chebyshev type I filter of order 2 for all analog filters
[b,a] = cheby1(2,10,0.6) %10 is 10dB peak to peak passband ripple,0.6 is normalized cut-off(passband edge) frequency
%efault low pass filter

[b,a] = cheby1(2,10,0.6,'low')

[b,a] = cheby1(2,10,0.6,'high')

[b,a] = cheby1(1,10,[0.2 0.8],'stop')


[b,a] = cheby1(1,10,[0.2 0.8],'bandpass')


freqz(b,a)
[b,a] = cheby1(2,10,0.6)


%this gives transfer function in zeros,poles and gain format
%the transfer function expression is same as that of butterworth filter
    
[z,p,k] = cheby1(2,10,0.6)



   

%this returns the anolog prototype of Chebyshev type I filter 
%first input argument is order order and second is peak to peak passband
%ripple

[z,p,k] = cheb1ap(1,3)



[z,p,k] = cheb1ap(2,3)


[z,p,k] = cheb1ap(2,10)




