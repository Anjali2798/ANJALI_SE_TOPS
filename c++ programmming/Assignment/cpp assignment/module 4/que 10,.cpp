//10.Write a program to concatenate the two strings using Operator Overloading
#include<iostream>
using namespace std;
class str{
	char name1[50],name2[50];
	
	public:
	    str(char s1[50],char s2[50])
		{
			
		
			strcpy(name1,s1);
			strcpy(name2,s2);
		}
		str operator + ()
		{
			cout<<"merged string is "<<strcat(name1,name2);
		}
		
};
int main()
{
	str obj("anjali","sonejee");
	+obj;     
}