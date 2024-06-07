#  Write a Python program to print all unique values in a dictionary.
d1 = {"a" : 10,
      "b" : 20,
      "c" : 30,
      "d" : 20,
      "e" : 10
      }

st = d1.values()
print(set(st))
