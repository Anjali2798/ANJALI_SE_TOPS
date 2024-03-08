 //6 Write a C++ Program to show access to Private Public and Protected using Inheritance
//private
//#include<iostream>
//using namespace std;
//class student{
//	
//
//		int roll_no;
//		string name;
//};
//class result:public student
//{
//	float pr;
//	public:
//		void get()
//		{
//			cout<<"enter roll no and name ";
//			cin>>roll_no>>name;
//			cout<<"enter percentage ";
//			cin>>pr;
//		}
//		void display()
//		{
//			cout<<"name is "<<name<<" id is "<<roll_no<<" percentage is "<<pr;
//		}
//};
//int main()
//{
//	result obj;
//	obj.get();
//	obj.display();
//	return 0;
//}

//public
//#include<iostream>
//using namespace std;
//class student{
//	
//	public:
//		int roll_no;
//		string name;
//};
//class result:public student
//{
//	float pr;
//	public:
//		void get()
//		{
//			cout<<"enter roll no and name ";
//			cin>>roll_no>>name;
//			cout<<"enter percentage ";
//			cin>>pr;
//		}
//		void display()
//		{
//			cout<<"name is "<<name<<" id is "<<roll_no<<" percentage is "<<pr;
//		}
//};
//int main()
//{
//	result obj;
//	obj.get();
//	obj.display();
//	return 0;
//}

//protected
#include<iostream>
using namespace std;
class student{
	
	protected:
		int roll_no;
		string name;
};
class result:public student
{
	float pr;
	public:
		void get()
		{
			cout<<"enter roll no and name ";
			cin>>roll_no>>name;
			cout<<"enter percentage ";
			cin>>pr;
		}
		void display()
		{
			cout<<"name is "<<name<<" id is "<<roll_no<<" percentage is "<<pr;
		}
};
int main()
{
	result obj;
	obj.get();
	obj.display();
	return 0;
}