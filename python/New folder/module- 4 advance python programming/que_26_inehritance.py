#  Explain Inheritance in Python with an example? What is init? Or What 
# Is A Constructor In Python? 
"""
inehritance means one class derived properties of another class which is represent parent and child 
relationship 
  using of inheritance we can reduce our code

    there are 5 types of inheritance:

    1] single level inheritance
    2] multi level inheritance
    3] multiple inheritance
    4] hybrid inheritance
    5] hierarchical inheritance
"""
class parent:
    num1 = 10
    num2 = 30

class child(parent):
    def output(self):
        print(self.num1)
        print(self.num2)

obj = child()
obj.output()

"""
constructor : constructor is a special member function in python 
              there is no concept like constructor but there is
              __init__() method which is same behave like constructor


__init__():
    pass

"""