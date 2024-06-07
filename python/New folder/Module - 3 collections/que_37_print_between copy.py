#  Write a Python script to print a dictionary where the keys are numbers between 1 and 15. 
dict = {}

for i in range(1,16):
    k = input("enter keys ")
    v = input("enter values ")
    dict[k] = v
print(dict)