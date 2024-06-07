#  Write a Python program to map two lists into a dictionary 

l1 = [1,2,3,4,5]
l2 = ["Anjali","Dax","Raj","Purvansh"]

# dic = dict(zip(l1,l2))
# print(dic)

Dic = {}

for key in l1:
    for value in l2:
        Dic[key] = value
        l2.remove(value)
        break
    
print(str(Dic))