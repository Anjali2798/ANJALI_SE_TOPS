# Write a Python program to calculate surface volume and area of a cylinder  

import math

def cylinder_surface_area(radius, height):
    return 2 * math.pi * radius**2 + 2 * math.pi * radius * height

def cylinder_volume(radius, height):
    return math.pi * radius**2 * height

print(cylinder_surface_area(2,4))
print(cylinder_volume(3,9))