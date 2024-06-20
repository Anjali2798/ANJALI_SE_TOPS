#  Write a Python program to append text to a file and display the text. 
f = open("my file.txt","a")
f.write("welcome back to the file")
f.close()

f = open("my file.txt","r")
print(f.read())
