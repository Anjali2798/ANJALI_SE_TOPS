#  write a Python function that takes two lists and returns true if they have at least one common member. 

l1 = []
l2 = []
element = int(input("enter how many elements do you want to print? "))
for l in range(element):
     num = int(input("enter element for 1st list "))
     l1.append(num)

print("--------------------------------------")
for l in range(element):

    num1 = int(input("enter element for 2nd list "))
    l2.append(num1)
print(l1)
print(l2)
status = True
for i in l2:
    if i in l1:
     status = True
     break
    else:
            status = False 
            

if status:
    print("you have at least one common member")
else:
    print("you have not at least one common member")
    
    
