import numpy as np

str1 = input("enter the string:")
str4 = input("enter the next string:")
str2 = str1[:len(str1)] + str4 #concatenate the string
print(str2)
str3 = str1*2
print(str3) #multiply the string

#a = np.e
#print(a)

print(len(str3)) #gives the length of the string
print(str3.lower()) #converts only upper case alphabets to lower case alphabets
print(str3.upper()) #converts only lower case alphabets to upper case alphabets

print(str3.swapcase()) #swaps upper and lower

print(str3.split(' , ',1))

