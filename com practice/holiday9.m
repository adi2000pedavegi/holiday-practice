num = 1;
den = [1 1] ;
sys1 = tf(num,den);   %Continuos time transfer function
sys2 = tf(num,den,0.01); %Discrete time transfer function and other input argument(0.01) is sample time basically doing discerization of continuos system
%Both input arguments should be of coefficients of numerator and
%denominator


%Adding delay(input/output) to continuos and discrete time systems
sys3 = tf(num,den,'ioDelay',0.05);
sys4 = tf(num,den,0.01,'ioDelay',5);
%For the discrete system the delay should be of non negative integer

H1 = tf(1,[1,1]);
H2 = tf([1 1],[1,1,3]);
%Step response for the transfer function 
figure;
step(H1)
figure;
step(H2)
H3 = feedback(H2,H1); %Command for closed loop transfer function having H1 as feedback factor(H) and actual transfer function(G) as H2
%Actually GH will be open loop gain and G/1+GH will be closed loop gain
figure;
step(H3)