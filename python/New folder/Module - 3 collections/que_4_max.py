#  Write a Python function to get the largest number, smallest num and sum of all from a list

l1=[]
status = True

# while status:
#     add=int(input("enter the value "))
#     l1.append(add)
#     choice = input("do you want to continue,press yes or no ").lower()
#     if choice=="yes":
#         status=True
#     else:
#         status=False 

num = int(input("how many elements do you want to print in list ? "))
for i in range(1,num+1):
    ele = int(input("enter the number "))
    l1.append(ele)
print(l1)
print("smallest number is ",min(l1))

max=0
sum=0

for m in l1:
    sum+=m
   
    while m!=0:

        modulo=m%10
        if modulo>max:
            max=modulo
        m=m/10
    

print("largest number is ",max)
print("sum is ",sum)

