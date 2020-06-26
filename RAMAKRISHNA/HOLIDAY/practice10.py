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
#bascially this converts data into arrays

plt.subplot(3,1,1)
plt.title("Original sine wave")
plt.plot(sinew[:100])
plt.subplot(3,1,2)
plt.title("Noisy wave")
plt.plot(noisew[:500]) 
plt.subplot(3,1,3) 
plt.title("Original + Noise") 
plt.plot(combinedw[:400]) 
plt.show()
