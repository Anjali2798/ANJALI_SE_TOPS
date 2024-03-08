/*4. Write a C++ program to implement a class called Bank Account that has 
private member variables for account number and balance. Include 
member functions to deposit and withdraw money from the account*/
#include<iostream>
using namespace std;
class bank{
	int account_number,balance=20000,deposite,withdraw;
	public:
		void get()
		{ 
		cout<<"enter your account number is ";
		cin>>account_number;
		
			cout<<"enter the amount you want to deposite ";
			cin>>deposite;
			cout<<"enter the amount you want to withdraw ";
		
			if(withdraw>20000)
			{
				cout<<"kindly enter valid amount";
			}
			else
			{
					cin>>withdraw;
			}
			
			
		}
		void set()
		{
			cout<<"account number is "<<account_number;
			cout<<"balance is "<<((balance+deposite)-withdraw);
			
		}
		
};
int main()
{
	bank bk;
	bk.get();
	bk.set();
	return 0;
}