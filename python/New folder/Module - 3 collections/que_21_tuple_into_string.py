#  Write a Python program to convert a tuple to a string. 

t1 = ("my","name","is","anjali")
print(t1)
print(type(t1))
convert = ""
for word in t1:
    convert += word + " "
print(convert)