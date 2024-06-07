#  Write a Python script to concatenate following dictionaries to create a new one
dict1 = {1:20 , 2:30}  #same key hoy tyare koi ek j key lese
dict2 = {2:40 , 5:90}

dict3 = {}

for i in (dict1,dict2):
    dict3.update(i)

print(dict3)

