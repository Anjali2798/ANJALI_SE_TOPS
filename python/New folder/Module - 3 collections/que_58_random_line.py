# Write a Python program to read a random line from a file.
import random

lines = open('line_random.txt').read().splitlines()
line = random.choice(lines)
print(line)
