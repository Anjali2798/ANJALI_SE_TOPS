#  Write a Python program to convert a list of characters into a string. 
l1 = []

enter = int(input("enter how many strings do you want to print? "))
for i in range(enter):
    str = input("enter string ")
    l1.append(str)
print(l1)

convert = ""

for word in l1:
    convert +=  word + " "

print(convert)
