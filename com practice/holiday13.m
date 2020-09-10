rng default;
%Basic observing the constellation diagrams of 4-different modulation
%schemes(normalized constellations) for the rx data snr is choosed to be 30
%dB(awgn as the channel)
%BPSK constellation diagram for both tx and rx data

%{
a1 = randi([0 2-1],1250,1);
b1 = pskmod(a1,2);
constplot = comm.ConstellationDiagram;
constplot(b1)
%}

%{
a1 = randi([0 2-1],1250,1);
b1 = pskmod(a1,2);
c1 = awgn(b1,30);
constplot = comm.ConstellationDiagram;
constplot(c1)
%}

%pi/4-QPSK constellation diagram for both tx and rx data

%{
a2 = randi([0 4-1],1250,1);
b2 = pskmod(a2,4,pi/4);
constplot = comm.ConstellationDiagram;
constplot(b2)
%}

%{
a2 = randi([0 4-1],1250,1);
b2 = pskmod(a2,4,pi/4);
c2 = awgn(b2,30);
constplot = comm.ConstellationDiagram;
constplot(c2)
%}

%16-QAM constellation diagram for both tx and rx data

%{
a3 = randi([0 16-1],1250,1);
b3 = qammod(a3,16,'UnitAveragePower',true);
constplot = comm.ConstellationDiagram;
constplot(b3)
%}

%{
a3 = randi([0 16-1],1250,1);
b3 = qammod(a3,16,'UnitAveragePower',true);
c3 = awgn(b3,30);
constplot = comm.ConstellationDiagram;
constplot(c3)
%}

%64-QAM constellation diagram for both tx and rx data

%{
a4 = randi([0 64-1],1250,1);
b4 = qammod(a4,64,'UnitAveragePower',true);
constplot = comm.ConstellationDiagram;
constplot(b4)
%}

%{
a4 = randi([0 64-1],1250,1);
b4 = qammod(a4,64,'UnitAveragePower',true);
c4 = awgn(b4,30);
constplot = comm.ConstellationDiagram;
constplot(c4)
%}




