#  Write a Python program to remove duplicates from a list
l1=[2,3,4,5,6,3,5,6]
l2=[]

for l in l1:
    if l not in l2:
        l2.append(l)
        

print(l2)