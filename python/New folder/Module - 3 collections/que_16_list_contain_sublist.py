# Write a Python program to check whether a list contains a sub list 
main_list = [1,2,3,4,5,6,7,8]
sub_list = [3,4,5,6,8]

status = False
for i in sub_list:
    if i in main_list:
        status = True
    else:
        status = False
    
if status:
    print("yes,sublist found")
else:
    print("no sublist")