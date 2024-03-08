/*. Write a C++ program to create a class called Rectangle that has private 
member variables for length and width. Implement member functions to 
calculate the rectangle's area and perimeter.*/
#include<iostream>
using namespace std;
class rectangle{
	int length,width;
	public:
		void get()
		{
			cout<<"enter length ";
			cin>>length;
			cout<<"enter width ";
			cin>>width;
		}
		void rectangle_area()
		{
			cout<<"\narea of rectangle is "<<length*width;
		}
		void rectangle_perimeter()
		{
			cout<<"\nperimeter of rectangle is "<<(length+width)*2;
		}
};
int main()
{
	rectangle re;
	re.get();
	re.rectangle_area();
	re.rectangle_perimeter();
	return 0;
}
 