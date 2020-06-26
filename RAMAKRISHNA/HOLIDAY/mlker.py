import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.svm import SVC
from sklearn.metrics import classification_report,confusion_matrix,accuracy_score

df = pd.read_csv('innings.csv')
x = df.iloc[:,1:5].values
y = df.iloc[:,0].values

trainx,testx,trainy,testy = train_test_split(x,y,test_size = 0.2)
svclassifier = SVC(kernel='poly',degree=6)
#kernel classification is non linear and different types are sigmoid(sigmoid),gausian(rbf),polynomial(poly)
svclassifier.fit(trainx,trainy)
y_pred  = svclassifier.predict(testx)
print(confusion_matrix(testy,y_pred))
print(classification_report(testy,y_pred))
print(accuracy_score(testy,y_pred))

