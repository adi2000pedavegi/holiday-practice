%plotting using parametric cordinates
%image commands
figure;
imshow('Ganesh.jpg')
figure;
r = 4;
a = 5;
b = 3;
t = linspace(-2*pi,2*pi,100);
x1 = r*sin(t);
y1 = r*cos(t);
plot(x1,y1,'r')
hold on
x2 = a*cos(t);
y2 = b*sin(t);
plot(x2,y2,'g')


