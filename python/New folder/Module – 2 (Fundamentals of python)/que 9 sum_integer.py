# Write a Python program to sum of three given integers. However, if two values are equal sum will be zero.
num1=int(input("enter number 1 "))
num2=int(input("enter number 2 "))
num3=int(input("enter number 3 "))

if num1==num2 or num2==num3 or num3==num1:
    print("two values are same therefore sum is zero")
else:
    print("sum is ",num1+num2+num3)