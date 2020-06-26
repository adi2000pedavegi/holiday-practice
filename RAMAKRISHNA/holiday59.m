num = [2 1];
den = [4 3 2];
G = tf(num,den)
%obtaing a transfer function of numerator and denominator coeficients

%obtaining zeros poles and gain in discrete transfer fuction domain
[z,p,k] = zpkdata(G,'v')
K = zpk(z,p,k)
  
%obtaining state space model(matrix) for a transfer function
[A,B,C,D] = tf2ss(num,den)
[num den] = ss2tf(A,B,C,D)


%obtaining zero poles and gain from state  space model
%corelating coefficients of transfer functions zeros poles and gain of
%transfer function and A B C D matrices
[z,p,k] = tf2zp(num,den)
[z,p,k] = ss2zp(A,B,C,D)

[A,B,C,D] = zp2ss(z,p,k)
[num,den] = zp2tf(z,p,k)


