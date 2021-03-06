import numpy as np
import matplotlib.pyplot as plt
import math
import itertools

print("Channel coding of type B")
print("\n")
#loading the data
a = np.load('mss.npy')
m = np.array(a.reshape(-1))

snr = int(input("enter the value of snr ratio in dB:"))
print("\n")
T = 0.000001
fc = 2000000
fs = 50000000
Ts = 1/fs
nch = 3
kch = 1
chrat = int(nch/kch)
#intializing variables

n = np.zeros((25*chrat*len(m), 1))
s = np.zeros((25*chrat*len(m), 1))
y = np.zeros(((chrat*len(m)), 1))
x = np.zeros((chrat*len(m), 1))
xm = np.zeros((chrat*len(m), 1))
mkes = np.zeros((len(m), 1))
d = np.zeros((int((len(xm))/2), 1))
d1 = np.zeros((int((len(xm))/2), 1))
d2 = np.zeros((int((len(xm))/2), 1))
d3 = np.zeros((int((len(xm))/2), 1))
d4 = np.zeros((int((len(xm))/2), 1))

#defintion of noise which calculates according to snr value and Eb


def noise(a, b):
	nss = a/(10**(b/10))
	return nss


#Channel encoding(1/3 repetition coding)
for i in range(len(m)):
    x[(nch*i):(nch*(i+1))] = m[i]


for i in range(len(x)):
	if(x[i] == 1):
		xm[i] = -1
	else:
		xm[i] = 1

#Modulation using 4-QAM
for i in range(int((len(xm))/2)):
	n[((i)*(50)):(((i+1)*(50)))] = (np.arange(((i)*(50)), ((i+1)*(50)), 1)).reshape(-1, 1)
	s[((i)*(50)):(((i+1)*(50)))] = ((xm[2*i])*(np.cos(2*np.pi*fc*n[((i)*(50)):(((i+1)*(50)))]
                                                   * Ts))) + ((xm[(2*i)+1])*(np.sin(2*np.pi*fc*n[((i)*(50)):(((i+1)*(50)))] * Ts)))

#Computing energy
eavg = (np.mean((s)**2))*(T)
eb = (eavg/2)*(int(nch/kch))
#Adding white gaussian noise
No = noise(eb, snr)
w = (np.random.normal(0, np.sqrt((fs*No/2)), len(s))).reshape(-1, 1)
r = s + w

#The unique 4 waveforms corresponding to 4-QAM
s1 = np.cos(2*np.pi*fc*Ts*(np.arange(0, len(s), 1))) + \
    np.sin(2*np.pi*fc*Ts*(np.arange(0, len(s), 1)))
s2 = np.cos(2*np.pi*fc*Ts*(np.arange(0, len(s), 1))) - \
    np.sin(2*np.pi*fc*Ts*(np.arange(0, len(s), 1)))
s3 = -np.cos(2*np.pi*fc*Ts*(np.arange(0, len(s), 1))) + \
    np.sin(2*np.pi*fc*Ts*(np.arange(0, len(s), 1)))
s4 = -np.cos(2*np.pi*fc*Ts*(np.arange(0, len(s), 1))) - \
    np.sin(2*np.pi*fc*Ts*(np.arange(0, len(s), 1)))

#computing the distances between r and unique Si
s1 = s1.reshape(-1, 1)
s2 = s2.reshape(-1, 1)
s3 = s3.reshape(-1, 1)
s4 = s4.reshape(-1, 1)

temp1 = (r - s1)**2
temp2 = (r - s2)**2
temp3 = (r - s3)**2
temp4 = (r - s4)**2

#computing the minimum distance between them and mapping the values to corresponding 4-QAM modulated bits
for i in range(int((len(xm))/2)):
	d1[i] = np.sqrt(np.sum(temp1[((i)*(50)):(((i+1)*(50)))]))
	d2[i] = np.sqrt(np.sum(temp2[((i)*(50)):(((i+1)*(50)))]))
	d3[i] = np.sqrt(np.sum(temp3[((i)*(50)):(((i+1)*(50)))]))
	d4[i] = np.sqrt(np.sum(temp4[((i)*(50)):(((i+1)*(50)))]))

	d[i] = min([d1[i], d2[i], d3[i], d4[i]])

	if(d[i] == d1[i]):
		y[2*i] = 0
		y[(2*i)+1] = 0
	if(d[i] == d2[i]):
		y[2*i] = 0
		y[(2*i)+1] = 1
	if(d[i] == d3[i]):
		y[2*i] = 1
		y[(2*i)+1] = 0
	if(d[i] == d4[i]):
		y[2*i] = 1
		y[(2*i)+1] = 1

#Channel decoding using majority number of bits occurence resembling high probability
for i in range(len(m)):
    if((np.sum(y[(nch*i):(nch*(i+1))])) >= 2):
        mkes[i] = 1
    else:
        mkes[i] = 0


#Computing the bit error rate
count = 0
for i in range(len(mkes)):
    if(mkes[i] != m[i]):
        count = count + 1

print("Number of wrongly decoded bits")
print(count)
print("\n")
print("Bit Error Rate")
print(count/len(m))

#Reconstructing the image with the mkes data and plotting
receivedimage = mkes.reshape(400, 300)
plt.imshow(receivedimage, 'gray')
plt.show()
