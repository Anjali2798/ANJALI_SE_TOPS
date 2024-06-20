#  Write a Python program to read first n lines of a file.
f = open("my file.txt","r")
write = int(input("enter how many lines do you want to read? "))

for i in range(write):
    print(f.readline())