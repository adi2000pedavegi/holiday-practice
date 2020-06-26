%basic signals graphs
t = (-10:0.1:10)';
x = (linspace(1,100,100))';
impulse = t == 0;
unit = t >= 0;
ramp = t.*unit;
figure;
plot(t,impulse)
hold on
plot(t,unit)
hold on
plot(t,ramp)
hold on
figure;
plot(conv(sin(x),impulse))
figure;
plot(conv(sin(x),unit))
figure;
plot(conv(unit,unit))



