/*7. Write a C++ program to implement a class called Date that has private 
member variables for day, month, and year. Include member functions to 
set and get these variables, as well as to validate if the date is valid.*/
#include<iostream>
using namespace std;
class date{
	int day,month,year;
	public:
		void get()
		{
		        cout<<"enter day ";
				cin>>day;
				cout<<"enter month ";
				cin>>month;
				cout<<"enter year ";
				cin>>year;	
		}
		void set()
		{
			if(day<=31 && month<=12)
			{
				cout<<" "<<day<<"/ "<<month<<"/ "<<year;
			}
			else
			{
				cout<<"enter valid date";
			}
		}
};
int main()
{
	date dt;
	dt.get();
	dt.set();
	return 0;
}