#  Write a Python program to copy the contents of a file to another file.  
f = open("my file1.txt","r")
f1 = open("my file2.txt","w")

for line in f:
    f1.writelines(line)

