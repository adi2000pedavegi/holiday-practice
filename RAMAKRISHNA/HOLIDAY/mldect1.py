import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.tree import DecisionTreeRegressor
from sklearn import metrics
import math

df = pd.read_csv('innings.csv')
x = df.iloc[:,1:5].values
y = df.iloc[:,5].values
print(df)
trainx,testx,trainy,testy = train_test_split(x,y,test_size = 0.2,random_state = 0)
aditya = DecisionTreeRegressor()
aditya.fit(trainx,trainy)
y_pred  = aditya.predict(testx)
print(y_pred)
print('\n')
print(testy)
print('\n')
print(metrics.mean_absolute_error(testy,y_pred))
print('\n')
print(metrics.mean_squared_error(testy,y_pred))
print('\n')
print(np.sqrt(metrics.mean_squared_error(testy,y_pred)))


