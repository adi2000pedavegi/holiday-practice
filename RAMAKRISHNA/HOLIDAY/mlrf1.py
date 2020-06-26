import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import accuracy_score,classification_report


df = pd.read_csv('innings.csv')
x = df.iloc[:,1:5].values
y = df.iloc[:,0].values
print(df)

trainx,testx,trainy,testy = train_test_split(x,y,test_size = 0.5,random_state = 0)
s = StandardScaler()
trainx = s.fit_transform(trainx)
testx = s.transform(testx)

classifier = RandomForestClassifier(100,random_state = 0)
classifier.fit(trainx,trainy)
y_pred = classifier.predict(testx)

print(y_pred)
print(classification_report(testy,y_pred))
print(accuracy_score(testy,y_pred))

plt.plot(x,y,'o',color='green')
plt.plot(testx,y_pred,'o',color='crimson')
plt.xlabel('$x$')
plt.ylabel('$y$')
plt.show()
