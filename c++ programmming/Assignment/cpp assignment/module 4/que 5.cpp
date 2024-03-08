/*Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)*/
#include<iostream>
using namespace std;
class student{
	protected:
		int roll_no;
};
class test:public student{
	protected:
		int guj,eng;
};
class result: public test{
	int total;
	public:
		void get()
		{
			cout<<"enter roll no ";
			cin>>roll_no;
			cout<<"enter gujarati marks ";
			cin>>guj;
			cout<<"enter english marks ";
			cin>>eng;
		}
		void set()
		{
			cout<<"total marks are "<<guj+eng;
		}
};
int main()
{
	result obj;
	obj.get();
	obj.set();
	return 0;
}