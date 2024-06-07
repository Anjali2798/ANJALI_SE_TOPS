# Write a Python program to remove an empty tuple(s) from a list of tuples.
t1 = [(1,2,3),(),("anjali","harsh"),()]

for i in t1:
    if len(i)==0:
        t1.remove(i)
print(tuple(t1))



        
