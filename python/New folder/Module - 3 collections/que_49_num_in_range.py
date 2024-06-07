# Write a Python function to check whether a number is in a given range 
def myfun(n):
    if n in range(1,1000000):
        print("it is in a range")
    else:
        print("no it is not in a range")
myfun(490)
myfun(999)