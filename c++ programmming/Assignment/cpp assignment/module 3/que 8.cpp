//8. Write a C++ program to implement a class called Student that has private 
//member variables for name, class, roll number, and marks. Include 
//member functions to calculate the grade based on the marks and display 
//the student's information. Accept address from each student implement 
//using of aggregation
#include<iostream>
using namespace std;
class student{
	public:
	string name;
	int class_no;
	int roll_no;

	public:
		student()
		{
			cout<<"enter student name ";
			cin>>name;
			cout<<"enter class ";
			cin>>class_no;
			cout<<"enter roll no ";
			cin>>roll_no;
			
		}
};
class result{
	int marks;
	student *str;
	public:
		void display(student *str1)
		{
			str=str1;
			cout<<"marks is ";
			cin>>marks;
			cout<<"\nname is "<<str->name<<"\nclass is "<<str->class_no<<"\nroll no is "<<str->roll_no<<"\nmarks is "<<marks;
			
		}
};
int main()
{
	student obj;
	result obj1;
	obj1.display(&obj);
	return 0;
	
}
