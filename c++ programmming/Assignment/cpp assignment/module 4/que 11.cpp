/*11.Write a program to calculate the area of circle, rectangle and triangle
using Function Overloading
Rectangle: Area * breadth
Triangle: ½ *Area* breadth
Circle: Pi * Area *Area */
#include<iostream>
using namespace std;
class calculate{
	double length,width;
	public:
		void result()
		{
			cout<<"enter the length and width ";
			cin>>length>>width;
			cout<<"area of rectangle is "<<length*width;
			
		}
		void result(double base,double height)
		{
			cout<<"area of triangle is "<<0.5*base*height;
		}
		void result(int radius)
		{
			cout<<"area of circle is "<<3.14*radius*radius;
		}
	
};
int main()
{
	calculate obj;
	int choice;
	double one,two;
	cout<<"\n1 for area of rectangle 2 for area of triangle 3 for area of circle";
	cout<<"\nenter choice ";
	cin>>choice;
	cout<<"enter 2 values ";
	cin>>one>>two;
	switch(choice)
	{
		case 1:
			obj.result();
			break;
		case 2:
			obj.result(one,two);
			break;
		case 3:
			obj.result(4);
			
			break;
			default:
			cout<<"enter valid choice";
	}
	return 0;
}


