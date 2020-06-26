import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.neighbors import KNeighborsClassifier
from sklearn.metrics import accuracy_score,classification_report

df = pd.read_csv('innings.csv')
x = df.iloc[:,1:5].values
y = df.iloc[:,0].values
print(df)


trainx,testx,trainy,testy = train_test_split(x,y,test_size = 0.1)
s = StandardScaler()
s.fit(trainx)
trainx = s.transform(trainx)
testx = s.transform(testx)
classifier = KNeighborsClassifier(8)
classifier.fit(trainx,trainy)
y_pred = classifier.predict(testx)
print(y_pred)
print(accuracy_score(testy,y_pred))

plt.plot(x,y,'o',color='green')
plt.plot(testx,y_pred,'o',color='crimson')
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.show()

