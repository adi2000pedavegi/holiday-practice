%Convolution and cros correlation and correlation
x = [1,0,1]
y = 1:5
z = conv(x,y)
z = conv(x,y,'full') %default complete linear convolution
z = conv(x,y,'same')

x = [2 1 2 1]
y = [1 2 3 4]
z = cconv(x,y,4) %modulo 4 circular convolution(4 length circular convolution)
z = cconv(x,y) %circular convolution of length = length(x) + length(y) - 1


x = 1:5
z = xcorr(x) %default auto corelation
z = xcorr(x,x) %auto corelation sequence of x

y = 1:2


z = xcorr(x,y) %cross co-relation of sequences x and y



   

x = 1:5
norm(x) %returns the norm of the vector x

