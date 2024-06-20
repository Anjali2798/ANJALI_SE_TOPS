#  How to Define a Class in Python? What Is Self? Give An Example Of A Python Class
"""
using of class keyword we define a class in python
self keyword is instance of class which allows you to access variables,attributes and methods of a defined class
""" 
class student:
    def myclass(self,name,surname):
        print(name)
        print(surname)
stu = student()
stu.myclass("anjali","sonejee")
