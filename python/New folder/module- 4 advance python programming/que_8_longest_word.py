#  Write a python program to find the longest words.  
f = open("my file.txt","r")

line = f.readlines()

for lines in line:
    print(lines.split())

print(max(lines,key=len))

