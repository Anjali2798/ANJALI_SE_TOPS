# Write a Python function to calculate the factorial of a number (a nonnegative integer)


def factorial(num):
    f = 1
    for i in range(1,num+1):
        f*=i
    return f

result = factorial(5)
print(result)
