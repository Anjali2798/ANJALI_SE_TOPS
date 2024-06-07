#  Write a Python program to find the maximum and minimum numbers from the specified decimal numbers.
from decimal import *
data = list(map(Decimal, '2.43 2.61 2.45 3.55 2.10 0.02 7.05 9.0 10.0'.split()))
print("Maximum: ", max(data))
print("Minimum: ", min(data))