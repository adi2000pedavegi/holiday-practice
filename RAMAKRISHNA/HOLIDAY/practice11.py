import numpy as np
import matplotlib.pyplot as plt
import wave
import struct

samplesnum = 150
samplingrate = 150
amplitude = int(input("enter the amplitude:"))
f = 50
noisef = 1
sine = [(amplitude)*np.sin(2 * np.pi * f * x/samplingrate) for x in range(samplesnum)]
noisesine = [(amplitude)*np.sin(2 * np.pi * noisef * x/samplingrate) for x in range(samplesnum)]
sinew = np.array(sine)
noisew = np.array(noisesine) 
combinedw = sinew + noisew

data = np.fft.fft(combinedw)
freq = (np.abs(data[:len(data)]))
plt.plot(freq)
plt.show()
