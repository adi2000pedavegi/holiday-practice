rng default


M = 2;
insig = randi([0 M-1],2e3,1);
mod = comm.PSKModulator("ModulationOrder",M,"PhaseOffset",pi/M);
demod = comm.PSKDemodulator("ModulationOrder",M,"PhaseOffset",pi/M);
tx = mod(insig);
noise = comm.AWGNChannel('NoiseMethod', 'Signal to noise ratio (SNR)');
snr = 0:2:20;
for i=1:length(snr)
    noise.SNR = snr(i);
    rx = noise(tx);
    outsig = demod(rx);
    BER(i) = mean(insig~=outsig);
end
semilogy(snr,BER,'r*');


%{
M = 16;
insig = randi([0 M-1],2e3,1);
mod = comm.RectangularQAMModulator("ModulationOrder",M);
demod = comm.RectangularQAMDemodulator("ModulationOrder",M);
tx = mod(insig);
noise = comm.AWGNChannel('NoiseMethod', 'Signal to noise ratio (SNR)');
snr = 0:2:20;
for i=1:length(snr)
    noise.SNR = snr(i);
    rx = noise(tx);
    outsig = demod(rx);
    BER(i) = mean(insig~=outsig);
end


semilogy(snr,BER,'r*');
%}
