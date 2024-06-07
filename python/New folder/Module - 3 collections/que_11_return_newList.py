#  Write a Python function that takes a list and returns a new list with unique elements of the first list.
l1 = []
l2 = []
i =  []

num = int(input("enter how many elements do you want to print in list? "))
for i in range(num):
    ele = int(input("enter number "))
    l1.append(ele)
print(l1)

for i in l1:
    if i not in l2:
        l2.append(i)
print(l2)
