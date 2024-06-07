# Write a Python script to merge two Python dictionaries 
dic1 = {
    "A" : 4,
    "B" : 5,
    "C" : 6
}

dic2 = {
    "D" : 7,
    "E" : 8,
    "F" :9
}

dic1 |= dic2  #The update operator (|=).
print(dic1)

dic3 = dic1|dic2 #The merge operator (|).
print(dic3)

dic3 = { **dic1,**dic2} #The double asterisk/star operator (**)  #unpack method
print(dic3)

for i in (dic1,dic2):
    dic3.update(i)

print(dic3)