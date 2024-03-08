//1. Write a program to find the multiplication values and the cubic values using inline function
#include<iostream>
using namespace std;
inline int multi(int x,int y)
{
	return x*y;
}
inline int cube(int a)
{
	return a*a*a;

}
int main()
{
	cout<<"multiplication is "<<multi(3,5)<<endl;
	cout<<"cube is "<<cube(5);
	
	
	return 0;
}