n = 0:50;
x1 = cos(pi*n/3);
x2 = cos(2*pi*n/3);
x3 = x1 + x2;
y = 0;
for i=1:length(x3)
    if(i==1)
        y(i) = x3(i)/2;
    else
        y(i) = (x3(i)+x3(i-1))/2;
    end
end


subplot(2,2,1);
plot(n,x1)
title('Subplot 1: cos(x)')
subplot(2,2,2);
plot(n,x2)
title('Subplot 2: cos(2x)')
subplot(2,2,3);
plot(n,x3)
title('Subplot 3: cos(x) + cos(2x)')
subplot(2,2,4);
plot(n,y)
title('Subplot 4: movingmean filtered signal')


