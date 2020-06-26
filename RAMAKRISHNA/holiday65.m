%designs a Chebyshev type II filter 
[b,a] = cheby2(2,10,0.6) %2 is order of filter,10 is peak to peak ripple in stop band,0.6 is normalized cut-off or stop band frequency

[b,a] = cheby2(2,10,0.6,'low')

[b,a] = cheby2(2,10,0.6,'high')


[b,a] = cheby2(1,10,[0.2 0.8],'stop')


[b,a] = cheby2(1,10,[0.2 0.8],'bandpass')


[b,a] = cheby2(2,10,0.6,'low')


[z,p,k] = cheby2(2,10,0.6,'low')



%returns the zeros,poles and gain format
%it has zeros also
[z,p,k] = cheb2ap(1,3)


[z,p,k] = cheb2ap(2,3)

[z,p,k] = cheb2ap(2,10)

