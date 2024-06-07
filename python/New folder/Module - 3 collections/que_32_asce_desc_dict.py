#  Write a Python script to sort (ascending and descending) a dictionary by value.
dic = {"name":"anjali",
        "language":"pthon",
        "framework" : "django",
        "do" : "work",
       
       }
asd = sorted(dic.items())
print(asd)

dsc = sorted((dic.items()),reverse=True)
print(dsc)

