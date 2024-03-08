/*2. Define a class to represent a bank account. Include the following members:
3. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance*/
#include<iostream>
using namespace std;
class bank{
	string depositer_name;
	int acc_no;
	string acc_type;
	float amount;
   int withdrw_amount;
	int deposite_amo;
	
	public:
       void get_data()
       {
       	cout<<"enter depositer name ";
       	cin>>depositer_name;
       	cout<<"enter account number ";
       	cin>>acc_no;
       	cout<<"enter account type ";
       	cin>>acc_type;
       	cout<<"enter deposite amount ";
       	cin>>amount;
	   }
	   void deposite_amount()
	   {
	   	cout<<"enter the deposite amount ";
	   	cin>>deposite_amo;
	   	cout<<"amount is "<<deposite_amo;
	   	
	   	amount=amount+deposite_amo;
	   }
	   void withdrw_amo()
	   {
	   	
		   
	   	cout<<"enter withdraw amount ";
	   	cin>>withdrw_amount;
	   	cout<<"withdraw amount is "<<withdrw_amount;
	   	if(amount>=withdrw_amount)
	   	{
	   	
	   	amount=amount-withdrw_amount;
	   }
	   else
	   {
	   	cout<<"you don't have proper amount kindly check balance";
	   }
	   }
	   void display_amo()
	   {
	   	cout<<"\n name "<<deposite_amo;
	   	cout<<"\nbalance is "<<amount;
	   	
	   	
	   }
};
int main()
{
	char choice;
	bank bk;
	bk.get_data();
	do{
	
	cout<<"1 for deposite amount "<<endl;
	cout<<"2 for withdraw amount "<<endl;
	cout<<"3 for display amount "<<endl;
	cout<<"enter your choice ";
	cin>>choice;
	
	
	switch(choice)
	{
		case '1':
			bk.deposite_amount();
			break;
		case '2':
			bk.withdrw_amo();
			break;
		case '3':
			bk.display_amo();
			break;
		default:
			cout<<"kindly enter valid number";
		
	}
	cout<<"do you want to continue? ";
	cin>>choice;
}while(choice=='y');
	return 0;
}