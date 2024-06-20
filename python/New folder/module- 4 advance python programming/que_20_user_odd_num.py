#  Write python program that user to enter only odd numbers, else will 
# raise an exception. 

try:
    num = int(input("how many numbers do you want to print? "))
    for i in range(0,num+1):
        if i%2==0:
            print("number is even")
else: