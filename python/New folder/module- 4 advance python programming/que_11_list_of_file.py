#  Write a Python program to write a list to a file.

l1 = ["hello i am anjali""\ncurrently,i am learning python"]

f = open("my file1.txt","w")
f.writelines(l1)
f.close()