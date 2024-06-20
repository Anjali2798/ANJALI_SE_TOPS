#  Write a Python program to read a file line by line and store it into a list 

f = open("my file.txt","r")
l1 = []
# line = int(input("enter how many lines do you want to read ? "))
lines = f.readlines()
for line in lines:
    l1.append(line)
print(l1)