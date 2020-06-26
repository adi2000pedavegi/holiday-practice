import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import accuracy_score
from sklearn.discriminant_analysis import LinearDiscriminantAnalysis as LDA

df = pd.read_csv('innings.csv')
x = df.iloc[:,1:5].values
y = df.iloc[:,0].values

trainx,testx,trainy,testy = train_test_split(x,y,test_size = 0.2)
s = StandardScaler()
s.fit(trainx)
trainx = s.transform(trainx)
testx = s.transform(testx)
lda = LDA()
trainx = lda.fit_transform(trainx,trainy)
testx = lda.transform(testx)
print(trainx)
print("\n")
print(testx)
print("\n")
classifier = RandomForestClassifier(2,random_state = 0)
classifier.fit(trainx,trainy)
y_pred = classifier.predict(testx)
print(float(accuracy_score(testy,y_pred)))
print("\n")
print(y_pred)

