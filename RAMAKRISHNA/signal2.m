fs = 10e3
t = 0:(1/fs):0.1;
s1 = sawtooth(2*pi*50*t);
s2 = square(2*pi*50*t);
figure;

plot(t,s1)
figure;

plot(t,s2)

duty = 70 %percent of duty cycle

fs = 10e3;
t = 0:(1/fs):5;
s = square(2*pi*t,duty);
figure;
plot(t,s)
