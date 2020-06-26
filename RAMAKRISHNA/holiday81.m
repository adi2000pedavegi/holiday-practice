ni = 1.5e10;
NA1 = 1e15;
NA2 = 1e17;
NA3 = 1e19;
phif1 = 0.025*log(NA1/ni);
phif2 = 0.025*log(NA2/ni);
phif3 = 0.025*log(NA3/ni);
tox = 1e-6;
phis1 = 0:0.01:2*phif1;
phis2 = 0:0.01:2*phif2;
phis3 = 0:0.01:2*phif3;

vg1 = (phis1) + (17e-4*(tox)*sqrt(NA1)*sqrt(phis1)); 
vg2 = (phis2) + (17e-4*(tox)*sqrt(NA2)*sqrt(phis2)); 
vg3 = (phis3) + (17e-4*(tox)*sqrt(NA3)*sqrt(phis3)); 

plot((phis1/0.025),vg1)
hold on
plot((phis2/0.025),vg2)
hold on
plot((phis3/0.025),vg3)
legend({'NA = 10**15','NA = 10**17','NA = 10**19'},'Location','northwest','Orientation','vertical')
xlabel('surface potential/thermal voltage')
ylabel('VG Gate bias voltage')
title('Vg verses surface potential at tox = 10nm ')
