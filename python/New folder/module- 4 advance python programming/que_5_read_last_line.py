# Write a Python program to read last n lines of a file. 
f = open("my file.txt","r")
n = int(input("enter how many last line do you want to read?"))

for i in range(-n):
    print(f.readline(-n))