/*3. Write a C++ program to create a class called Car that has private 
member variables for company, model, and year. Implement member 
functions to get and set these variables*/
#include<iostream>
using namespace std;
class car{
	string model,company;
	int year;
	public:
	void get()
	{
		 cout<<"enter company name ";
		 cin>>company;
		 cout<<"enter car model ";
		 cin>>model;
		 cout<<"enter year ";
		 cin>>year;
	}
	void set()
	{
		cout<<"\ncompany name is "<<company;
		cout<<"\ncar model is "<<model;
		cout<<"\nyear is "<<year;
	}
	
		
};
int main()
{
	car c;
	c.get();
	c.set();
	return 0;
}