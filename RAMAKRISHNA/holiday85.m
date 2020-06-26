w = -pi:0.05:pi;
Fjw1 = 1./(1+((1+(i*w)).^2));
figure;
plot(w,abs(Fjw1))
a = -1;
figure;
Fjw1a = 1./(1+((1+ a + (i*w)).^2));
plot(w,abs(Fjw1a))

alpha = -2:0.05:2;
omega = alpha;
[xa,xw] = meshgrid(alpha,omega);
Fjw2 = 1./(1+((1+ xa + (i*xw)).^2));
figure;
surf(xa,xw,abs(Fjw2));

Fjw3 = (1+(i*w))./(1+((1+(i*w)).^2));
figure;
plot(w,abs(Fjw3))

Fjw4 = (1+ xa + (i*xw))./(1+((1+xa+(i*xw)).^2));
figure;
surf(xa,xw,abs(Fjw4))
