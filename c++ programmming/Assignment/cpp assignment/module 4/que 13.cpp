//13.Write a program to find the max number from given two numbers using friend function
#include<iostream>
using namespace std;
class enter{
	
int num1,num2;
public:
  void input()
  {
  	cout<<"enter num 1 ";
  	cin>>num1;
  	cout<<"enter num 2 ";
  	cin>>num2;
  	
  	
	  }	
	  friend void maximum(enter);
};
void maximum(enter e)
{
	if(e.num1>e.num2)
	{
		cout<<"number 1 is greater "<<e.num1;
	}
	else
	{
		cout<<"number 2 is greater "<<e.num2;
	}
}
int main()
{
	enter obj;
	obj.input(); 
	maximum(obj);
	return 0;
	
}