#  Write a Python program to get unique values from a list 
l1 = []
l2 = []
ele = int(input("enter how many elements do you want to print in list? "))
for i in range(ele):
    num = int(input("enter number "))
    l1.append(num)
print(l1)

for x in l1:
    if x not in l2:
        l2.append(x)
print(l2)

