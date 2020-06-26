import numpy as np
str1 = input("enter the first string:")
print(str1[2]) #return particular char 
print(str1[2:5]) #return char between both the values
print(str1.capitalize()) #returns string with capital first letter
print(str1[3:-2])
str1 = "pranay" #updates the string with the new string
print(str1)

del str1
#print(str1) #as the string gets deleted syntax error is shown in terminal

print(str(143)) #converts the integer to a string value

str2 = "{1} {0} {2}".format("Aditya","and","Ramakrishna")
print(str2)
print(str2[6]) #generally null charecter prints but it does not show
str3 = "{0:b}".format(101) #formats the string as binary
str3 = "{0:o}".format(101) #formats the string as octal
print(str3)

str4 = "{0:e}".format(165.648)
print(str4) #return exponential form

String1 = "|{:<10}|{:^10}|{:>10}|".format('Pranay','verses','Ashok') #alligns the string(left,right and center)
print(String1)

 
 
 
 
 
 
 
