import numpy as np
import wave
import struct
import matplotlib.pyplot as plt
f = 50
samplesnum = 150
samplingrate = 150
#if each value is less than 100 it returns noise signal and for 101 it just reduces the noise
amplitude = int(input("enter the amplitude:"))
file = "ramakrishna.wav"
sine = [(amplitude)*np.sin(2 * np.pi * f * x/samplingrate) for x in range(samplesnum)]
cos = [(amplitude)*np.cos(2 * np.pi * f * x/samplingrate) for x in range(samplesnum)]
temp = np.convolve(sine,cos)
plt.plot(temp)
#plt.plot(sine)
#plt.plot(cos)
plt.show()

