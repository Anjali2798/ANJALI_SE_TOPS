# Write a Python program to unzip a list of tuples into individual lists.


l1 = ["kachori","dabeli","vadapav"]
l2 = [30,50,60]

result = list(zip(l1,l2))
print(result)

result = list(zip(*result))
print(result)

