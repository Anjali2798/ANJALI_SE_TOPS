#  How Do You Handle Exceptions With Try/Except/Finally In Python? 
# Explain with coding snippets. 
try:
    numbers = [5, 2, 9, 1, 7]
    max_value = max(numbers)
    print(max_value)  
except:
    print("something went wrong")
else:
    print("everything is under control")
finally:
    print("thank you for visit this app")