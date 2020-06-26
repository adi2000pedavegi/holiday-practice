import numpy as np
import pandas as pd


data = pd.read_csv('cricket.csv')
print(data)
d1 = data.iloc[:,1].values
d2 = data.iloc[:,5].values
temp = d1 + d2
N = temp.size
x = temp.reshape((N,1))
print(x)
print(x.shape)
data['Match6'] = x
print(data)
data.to_excel('worldcup.xlsx',index=False)
data.to_csv('worldcup.csv',index=False)


