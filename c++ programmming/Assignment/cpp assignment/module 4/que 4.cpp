//4. Write a C++ Program display Student Mark sheet using Multiple inheritance
#include<iostream>
using namespace std;
class marks{
	protected:
   int math_marks;
   int guj_marks;
   int hindi_marks;	
};
class marks1{
	protected:
		int eng_marks;
		
};
class total: public marks,public marks1
{
	int total1;
	public:
		void get()
		{
			cout<<"enter maths marks ";
			cin>>math_marks;
			cout<<"enter gujarati marks ";
			cin>>guj_marks;
			cout<<"enter hindi marks ";
			cin>>hindi_marks;
			cout<<"enter english marks ";
			cin>>eng_marks;
			
		}
		void display()
		{
			cout<<"total marks are "<<math_marks+guj_marks+hindi_marks+eng_marks;

		}
};

int main()
{
	total tt;
	tt.get();
	tt.display();
	return 0;
}