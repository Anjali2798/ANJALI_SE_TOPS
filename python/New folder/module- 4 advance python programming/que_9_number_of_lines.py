#  Write a Python program to count the number of lines in a text file
f =  open("my file.txt","r")
line = f.readlines()
count = 0
for lines in line:
    count+=lines.count(lines)
print(count)
