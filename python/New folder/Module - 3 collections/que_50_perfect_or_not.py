# Write a Python function to check whether a number is perfect or not.
def perfect(num):
    sum = 0
    for i in range(1,num):
        if num%i==0:
            sum+=i
        else:
            pass
        
    if sum == num:
        print("number is perfect")
    else:
        print("number is not perfect")
    return num
result = perfect(25)
print(result)