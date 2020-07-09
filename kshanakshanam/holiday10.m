G = tf([2,5,1],[1,2,3]);
H = tf([5,10],[1,10]);

%Input arguments should be order of G and H
T1 = feedback(G,H);  %default as negative feedback
T2 = feedback(G,H,-1);
%These are negative feedback systems(sign as -1) having closed loop gain G/1+GH 
T3 = feedback(G,H,1);
%This is for positive feedback systems(sign as +1) having closed loop gain
%G/1-GH

figure;
bode(T3);
figure;
nyquist(T3);
figure;
rlocus(T3);
figure;
margin(T3);

%Directly gives poles and zeros for the transfer function
pole(H)
zero(H) 
%Low frequency DC gain i.e at (s=0 implies w=0)
dcgain(H)

%Impulse response h(t) for the given transfer function
figure;
impulse(H)


