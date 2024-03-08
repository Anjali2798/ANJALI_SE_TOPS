/*3. Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)*/
#include<iostream>
using namespace std;
class person{
	protected:
		string name;
		int age;
};
class student{
	protected:
		int percentage;
};
class teacher:public person,public student
{
	int salary;
	public:
		void get()
		{
			cout<<"enter student name ";
			cin>>name;
			cout<<"enter student age ";
			cin>>age;
			cout<<"enter percentage ";
			cin>>percentage;
			cout<<"enter teacher salary ";
			cin>>salary;
		}
		void display()
		{
			cout<<"\nname is "<<name;
			cout<<"\nage is "<<age;
			cout<<"\npercentage is "<<percentage;
			cout<<"\nsalary is "<<salary;
		}
	
	
};
int main()
{
	teacher tc;
	tc.get();
	tc.display();
	return 0;
}