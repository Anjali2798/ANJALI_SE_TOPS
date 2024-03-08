//2. Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>
using namespace std;
class rectangle{
	protected:
		int l,w;
};
class answer:public rectangle
{
	public:
		void get()
		{
			cout<<"enter length and width ";
			cin>>l>>w;
			cout<<"area of rectangle is "<<l*w;
		}
};
int main()
{
	answer obj;
	obj.get();
	return 0;
}
