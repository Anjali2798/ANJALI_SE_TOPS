# How can you pick a random item from a range?  
# num = int(input("enter number "))

# for i in range(1,num):
#     import random
# print(random.choice(num))


import random
num = int(input("enter number "))
print(random.randrange(1,num))