#Write a Python program to get the Fibonacci series of given range.
num1=0
num2=1

num=int(input("enter number "))
print("  ",num1,num2)
for i in range(num):
    num3=num1+num2
    print(num3,end="")
    num1=num2
    num2=num3

