import numpy as np
import pandas as pd

df = pd.read_csv('innings.csv')
print(df)
print("\n")
temp = df.drop('Class',1)
x = temp.head(6).values
z = temp.tail(6).values
y = temp.iloc[6:12,:].values
print(x)
print("\n")
print(y)
print("\n")
print(z)





