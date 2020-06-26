%Rectangular,traingular,square and sawtooth pulses generation
t = -1:0.1:1;
x = tripuls(t) %default centered around origin and has width 1
figure;
plot(t,x)

t = -1:0.1:1;
x = tripuls(t,2);
figure;
plot(t,x)
x = tripuls(t,3);
figure;
plot(t,x)

t = -1:0.01:1;
w = 2;
s = 0;
x = tripuls(t,w,s);
figure;
plot(t,x)
s = -0.5;
x = tripuls(t,w,s);
figure;
plot(t,x)
s = +0.5;
x = tripuls(t,w,s);
figure;
plot(t,x)


x1 = linspace(0,2*pi,50)'; %in general linspace generates a row vector
x2 = linspace(pi,3*pi,50)';
X = [x1, x2];
Y = [cos(x1), 0.5*sin(x2)];
stem(X,Y)

t = -10:0.05:10;
x = square(t); %default amplitude will be 1
figure;
plot(t,x)
x = square(t,85); %85 percent duty cycle
figure;
plot(t,x)
x = 2*square(t,85);
figure;
plot(t,x)

x = -5:0.1:5;
y = sinc(x);
figure;
plot(x,y)

t = -5:0.01:5;
x = sawtooth(t);
figure;
plot(t,x)
t = -10:0.01:10;
x = sawtooth(t);
figure;
plot(t,x)
x = sawtooth(t,0.5);
figure;
plot(t,x)
x = sawtooth(t,0.4);
figure;
plot(t,x)
x = sawtooth(t,0.9);
figure;
plot(t,x)

t = -5:0.01:5;
x = rectpuls(t);
figure;
plot(t,x)
x = rectpuls(t,3);
figure;
plot(t,x)
x = rectpuls(t,10);
figure;
plot(t,x)



