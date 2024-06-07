#  Write a Python program to count the number of strings where the string 
# length is 2 or more and the first and last character are same from a given 
# list of strings. 
s1= input("enter string ")
if len(s1)>2:
    print("length is more than 2")
    if s1[0] == s1[-1]:
        print("same")
    else:
        print("different")
else:
    print("below 2")