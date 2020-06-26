%Pole zero map and step response
num = [1];
den = [1 2 5];
G = tf(num,den)


pole(G)


num = [5];
den = [10 1];
G = tf(num,den)


u = 3;
figure;
step(u*G)
u = 2;
figure;
step(u*G)

%using the inbuit apps 
%linearSystemAnalyzer('step',G)
%linearSystemAnalyzer('bode',G)
%linearSystemAnalyzer('step',u*G)
num = [1];
den = [1 2 5];
G = tf(num,den)


pole(G)



figure;
pzmap(G)
figure;
step(G)
%Hence by varying the zeta value we can find pole-zero map and step
%response for any of the four second order systems
