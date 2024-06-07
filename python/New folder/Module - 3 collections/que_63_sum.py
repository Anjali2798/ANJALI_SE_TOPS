# Write a Python program to returns sum of all divisors of a number 

num = int(input("enter a number "))
l1 = []
sum = 0
for i in range(1,num+1):
    if num%i == 0:
        l1.append(i)
        sum+=i

print(l1)
print(sum)