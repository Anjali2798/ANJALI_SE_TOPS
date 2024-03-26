#  Write a Python program to get a single string from two given strings, 
# separated by a space and swap the first two characters of each string. 

str1=input("enter string 1 ")
str2=input("enter string 2 ")

combine= str1+" "+str2
print(combine)



rev=str1[:2]
rev2=str2[:2]
combine1=print(rev[::-1]+str1[2:]+" "+rev2[::-1]+str2[2:])


