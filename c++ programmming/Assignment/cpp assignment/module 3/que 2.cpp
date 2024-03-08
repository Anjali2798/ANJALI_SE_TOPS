//2. Write a program of Addition, Subtraction, Division, Multiplication using constructor.
#include<iostream>
using namespace std;
class calculator{
	int a,b;
	public:
		calculator()
		{
			cout<<"enter the value of A ";
			cin>>a;
			cout<<"enter the value of B ";
			cin>>b;
		}
		void addition()
		{
			cout<<"\nAddition of "<<a<<" and "<<b<<" is "<<a+b; 
		}
		void subtraction()
		{
			cout<<"\nsubtraction of "<<a<<" and "<<b<<" is "<<a-b;
		}
		void division()
		{
			cout<<"\ndivision of "<<a<<" and "<<b<<" is "<<a/b;
		}
		void multiplication()
		{
			cout<<"\nmultiplication of "<<a<<" and "<<b<<" is "<<a*b;
		}
		};

int main()
{
	calculator cl;
	cl.addition();
	cl.subtraction();
	cl.division();
	cl.multiplication();
	
	return 0;
}

