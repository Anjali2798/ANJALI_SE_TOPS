/*Write a C++ program to implement a class called Circle that has private 
member variables for radius. Include member functions to calculate the 
circle's area and circumference*/
#include<iostream>
using namespace std;
class circle{
	int radius;
	public:
		void get()
		{
		
		cout<<"enter the radius "<<endl;
		cin>>radius;
	}
	void area_circle()
	{
		cout<<"area of circle is "<<3.14*radius*radius<<endl;
	}
	void circum_circle()
	{
		cout<<"circumference of circle is "<<2*3.14*radius<<endl;
	}
};
int main()
{
	circle cr;
	cr.get();
	cr.area_circle();
	cr.circum_circle();
	return 0;
}
