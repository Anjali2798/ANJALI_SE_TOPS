//12.Write a program to swap the two numbers using friend function without using third variable
#include<iostream>
using namespace std;
class declare{
       int a,b;
	   public:
	   void get()
	   {
	   	cout<<"enter the value of a ";
	   	cin>>a;
	   	cout<<"enter the value of b ";
	   	cin>>b;
	   	b=a+b;
	a=b-a;
    b=b-a;

		   }	
		   friend void swipe(declare);
};
void swipe(declare d)
{
	    cout<<"\nafter swaping value of a is "<<d.a;
    cout<<"\nafter swaping value of b is "<<d.b;
}
int main()
{
	declare obj;
	obj.get();
	swipe(obj);
	return 0;
}
