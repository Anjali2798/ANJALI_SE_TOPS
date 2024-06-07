#  Write a Python program to generate and print a list of first and last 5 
# elements where the values are square of numbers between 1 and 30.

l1 = []

for i in range(1,30+1):
    multi = i**2
    l1.append(multi)
print(l1)

sum = l1[:5] + l1[-5:]
print(sum)