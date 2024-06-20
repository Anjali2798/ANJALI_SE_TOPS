#  Write a Python class named Circle constructed by a radius and two 
# methods which will compute the area and the perimeter of a circle  

class circle:
    def __init__(self,radius):
        self.radius = radius

    def area_of_cir(self):
        print("area of circle is ",3.14*self.radius*self.radius)

    def perimeter_of_circle(self):
        print("perimeter of a circle is ",2*3.14*self.radius)
obj = circle(24)
obj.area_of_cir()
obj.perimeter_of_circle()