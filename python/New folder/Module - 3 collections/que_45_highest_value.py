#  Write a Python program to find the highest 3 values in a dictionary 
my_dict = {
    1 : 3,
    2 : 4,
    3 : 5,
    4 : 10,
    7 : 9,

}
got = sorted(my_dict.values(),reverse=True)
print(got[0:3])

