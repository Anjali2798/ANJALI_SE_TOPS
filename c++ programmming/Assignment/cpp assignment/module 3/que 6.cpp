/*6 Write a C++ program to implement a class called Employee that has 
private member variables for name, employee ID, and salary. Include 
member functions to calculate and set salary based on employee 
performance. Using of constructor */
#include<iostream>
using namespace std;
class employee{
	string name;
	int id;
	float salary;
	public:
		employee()
		{
			cout<<"enter employee name ";
			cin>>name;
			cout<<"enter employee ID ";
			cin>>id;
			cout<<"enter salary ";
			cin>>salary;
		}
		
		
};
int main()
{
	employee em;
	return 0;
}