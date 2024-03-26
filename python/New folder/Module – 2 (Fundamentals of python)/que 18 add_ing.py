#  Write a Python program to add 'ing' at the end of a given string (length 
# should be at least 3). If the given string already ends with 'ing' then add 
# 'ly' instead if the string length of the given string is less than 3, leave it 
# unchanged.

name=input("enter your name ")


print(len(name))

if len(name)>=3 and name.endswith("ing"):
    name+= "ly"
else:
    name+="ing"

print(name)
    
