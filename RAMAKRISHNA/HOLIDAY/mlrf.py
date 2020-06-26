from sklearn.ensemble import RandomForestRegressor
from sklearn.model_selection import train_test_split
import pandas as pd
from sklearn import metrics
from sklearn.preprocessing import StandardScaler
import numpy as np
import matplotlib.pyplot as plt

df = pd.read_csv('innings.csv')
x = df.iloc[:,1:5].values
y = df.iloc[:,5].values
print(x)
print("\n")
trainx,testx,trainy,testy = train_test_split(x,y,test_size = 0.5,random_state = 0)
s = StandardScaler()
trainx = s.fit_transform(trainx)
testx = s.transform(testx)
regressor = RandomForestRegressor(20,random_state = 0)
regressor.fit(trainx,trainy)
y_pred = regressor.predict(testx)

print(y_pred)
print(metrics.mean_absolute_error(testy, y_pred))  
print(metrics.mean_squared_error(testy, y_pred))  
print(np.sqrt(metrics.mean_squared_error(testy, y_pred)))  


plt.plot(x,y,'o',color='green')
plt.plot(testx,y_pred,'o',color='crimson')

plt.show()


