#   Write a Python program to check multiple keys exists in a dictionary
dictionary ={

    "name" : "anjali",
    "roll no": 23,
    "subject" : "python",
    "framework" : "django",

}


length = len(dictionary)

print(length)

if length>1:
    print("multiple key is exist")
else:
    print("multiple key is not exist")