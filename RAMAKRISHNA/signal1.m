
%Quantization of a analog signal
n = 0:19;
x = 6.35*cos(pi*n/10);
N = input("enter the value of N:");
a = min(x);
b = max(x);
delta = (b-a)/((2^N) - 1);
y = (floor((x-a)/delta))*delta;
y = y + a;

qfunc(0)
qfunc(inf)
qfunc(-inf)

qfuncinv(1)
qfuncinv(0)
qfuncinv(0.5)

%returns Q(x) + Q(-x) = 1
%Q function from the gaussian deriavtive

rlc_gui
