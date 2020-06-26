%Downsampling and upsampling of anloag signal
%Applying the above for a audio signal
x = 1:6

y = downsample(x,2)  %making x(n) signal as x(n/2)


y = downsample(x,3)

y = x(1:2:length(x))



y = x(1:3:length(x))


x = [1,2,3,4,5,6;7,8,9,10,11,12]


x = x'



y1 = downsample(x,2)

x1 = downsample(x(:,1),2)

x2 = downsample(x(:,1),2)

x2 = downsample(x(:,2),2)


x = [x1 x2]

x = 1:6

y = upsample(x,2)

y = upsample(x,3)

y = upsample(x,2,1)



y = downsample(x,2,1)

%the other input is phase factor must lie with 0 to N-1 only. 

[x,Fs] = audioread('chiru.mp4');
x1 = x(:,1); %default each channel is taken as each column
x2 = x(:,2);
x1 = downsample(x1,2);
x2 = downsample(x2,2);
x = [x1 x2];
audiowrite('chiru2.mp4',x,Fs)
[x,Fs] = audioread('chiru.mp4');
x = downsample(x,2);
audiowrite('chiru1.mp4',x,Fs)
[x,Fs] = audioread('chiru.mp4');
x = upsample(x,2);
audiowrite('chiru3.mp4',x,Fs)

