#  Write a Python program to read a file line by line store it into a variable.
f = open("my file.txt","r")

line = f.readlines()

# for lines in line:
store = line
print("store = ",store)