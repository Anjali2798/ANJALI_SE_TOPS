# How can you pick a random item from a list or tuple?
"""
with the using of random module, we can pick a random item from list or tuple
"""
l1 = [1,2,3,4,5,"anjali","harsh"]
tup = ("dhruv","kishan",-2,0)

import random

print(random.choice(l1))
print(random.choice(tup))