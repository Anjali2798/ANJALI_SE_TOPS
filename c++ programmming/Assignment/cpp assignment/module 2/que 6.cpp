/*Write a C++ program to create a class called Person that has private 
member variables for name, age and country. Implement member 
functions to set and get the values of these variables.*/
#include<iostream>
using namespace std;
class person{
	string name;
    int age;
    string country;
    public:
    	void get_data()
    	{
    		cout<<"enter name ";
    		cin>>name;
    		cout<<"enter age ";
    		cin>>age;
    		cout<<"enter country "<<endl;
    		cin>>country;
		}
		void display_data()
		{
			cout<<"name is "<<name<<endl;
			cout<<"age is "<<age<<endl;
			cout<<"country is "<<country;
		
		}
    	
};
int main()
{
	person pr;
	pr.get_data();
	pr.display_data();
	return 0;
}