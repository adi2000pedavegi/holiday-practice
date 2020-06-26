%PID controllers in control systems
Kp = 1;
Kd = 1;
Ki = 1;
c = pid(Kp,Ki,Kd) %input argument order should be like this only



num = [1];
den = [1 10 20];
o = tf(num,den) %open loop transfer function


C = pid(300);%p-ony controller


T = feedback(C*o,1) %P-only controller transfer function


T = feedback(C*o,2)


T = feedback(C*o,0.5)

num = [1];
den = [1 10 20];
o = tf(num,den)


C = pid(300,0,10)%PD controller



T = feedback(C*o,0.5) %PD controller transfer function 



T = feedback(C*o,1) %in general should be taken as 1 generally acts as gain factors

  
 
T = feedback(C*o,2)



C = pid(300,70) %only PI controller


 

T = feedback(C*o,0.5)


T = feedback(C*o,1)



T = feedback(C*o,2)


num = [1];
den = [1 10 20];
o = tf(num,den)



C = pid(300,30,70) %return the actual main PID controller



T = feedback(C*o,0.5)


T = feedback(C*o,1)



T = feedback(C*o,2)



figure;
nyquist(o) %gives the nyqyuist plot of the transfer function
figure;
margin(o) %margin plot i.egain margin and phase margin
figure;
bode(o)  %bode plot of transfer function

rlocus(o)
