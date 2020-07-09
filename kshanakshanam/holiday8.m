%SISO State space representation for speed control of DC motor
%Modelling a electromechanical system using state space matrices
R = 2;%Armature Resistance
L = 0.5;%Armature Inducatnce
Km = 0.02;%Armature constant
Kb = 0.02;%EMF constant
Kf = 0.1;  %Frictional loss coefficent
J = 0.02; %Inertial load expressed in terms of moment of inertia

%Iniatializing state space matrices
A = [-R/L,-Kb/L;Km/J,-Kf/J];
B = [1/L;0];
C = [0 1];
D = 0;

%This is done if we only know the A,B,C,D matrices
sys_ss = ss(A,B,C,D);
sys_tf = tf(sys_ss); %Transfer function representation in numerator and denominator polynomial
sys_zpk = zpk(sys_ss); %Zero pole gain format in their respective products


%Every values are observed from above state space matrices
%Alternative for transfer function format an dzero pole gain format
num = 2;  %Numerator coefficients
den = [1,9,20.04];  %Denominator coefficients
g1 = tf(num,den);

z = [];  %Zeros 
p = [-4.042,-4.958]; %Poles
k = 2; %DC gain
g2 = zpk(z,p,k);




