%Chebyshev filter design
Wp = 0.6;
Ws = 0.8;
Rp = 3;
Rs = 20;
[n,Wp] = cheb1ord(Wp,Ws,Rp,Rs)

[n,Ws] = cheb2ord(Wp,Ws,Rp,Rs)

Wp = 0.6;
Ws = 0.8;
Rp = 3;
Rs = 20;

%All the three requires all fourinput arguments 
%Wp is corner freuency in pass band
%Ws is corner frequency in stop band
%Rp is ripple in pass band
%Rs is ripple in stop band
%Wn is normlized cut-off freuency in which Wp = Ws




