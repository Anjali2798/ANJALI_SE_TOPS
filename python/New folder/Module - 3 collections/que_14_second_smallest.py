#  Write a Python program to find the second smallest number in a list.
 
l1 = []

num = int(input("enter how many elements do you want to print? "))

for i in range(num):
    n =  int(input("enter number "))
    l1.append(n)
print(l1)
l1.sort(reverse=True)
print(l1)
l=l1[-2]
print(l)
