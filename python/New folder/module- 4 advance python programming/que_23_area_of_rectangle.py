#  Write a Python class named Rectangle constructed by a length and 
# width and a method which will compute the area of a rectangle 

class rectangle:
    def __init__(self,length,width):
        self.length = length
        self.width = width
    
    def display(self):
        print("area of rectangle is ",self.length*self.width)

obj = rectangle(20,24)
obj2 = rectangle(11,10)
obj.display()
obj2.display()