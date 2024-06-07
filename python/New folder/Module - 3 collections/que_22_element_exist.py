#  Write a Python program to check whether an element exists within a tuple.

t1 = (1,3,4,5,6,7,10)
status = False
search = int(input("enter the number do you want to search "))
for i in t1:
    # print(i)
    if search == i:
      status = True
      break
    else:
      status = False

if status:
   print("exist")
else:
   print("not exist")


