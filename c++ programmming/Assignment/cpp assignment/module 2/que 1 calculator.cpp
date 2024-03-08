//1 WAP to create simple calculator using class
#include<iostream>
using namespace std;
class calculator{
	int n1,n2;
	public:
		void take_data()
		{
			cout<<"enter 2 values ";
			cin>>n1>>n2;
		}
		void addition()
		{
			cout<<"\naddition of "<<n1<<" and "<<n2<<" is "<<n1+n2;
		}
	   void subtraction()
	   {
	   	cout<<"\nsubtraction of "<<n1<<" and "<<n2<<" is "<<n1-n2;
	   }
	   void division()
	   {
	   	cout<<"\ndivision of "<<n1<<" and "<<n2<<" is "<<n1/n2;
	   }
	   void multiplication()
	   {
	   	cout<<"\nmultiplication of "<<n1<<" and "<<n2<<" is "<<n1*n2;
	   }
	   
};

int main()

{
	calculator c;
	
	c.take_data();
	int choice;
	cout<<"\n1 for all solution(addition,sub,multi,division)";
	cout<<"\n3 for add,4 for division,5 for multi,6 for sub ";
	cout<<"\nkindly enter your choice ";
	cin>>choice;
	if(choice==1)
	{
	
	c.addition();
	c.division();
	c.multiplication();
	c.subtraction();
}
else
{
	switch(choice)
	{
		case 3:
			c.addition();
			break;
		case 4:
			c.division();
			break;
		case 5:
			c.multiplication();
			break;
		case 6:
			c.subtraction();
			break;
			default:
				cout<<"kindly enter valid choice";
		}
	}
	return 0;
}
	
