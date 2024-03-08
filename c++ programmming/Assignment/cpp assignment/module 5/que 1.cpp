//1.Write a program of to swap the two values using template
#include<iostream>
using namespace std;
template<typename A>
void swap(A a,A b)
{
	//a=2 b=3
	//a=a-b=-1
	//b=a+b -1+3=2
	//a=b-a 2+1 =3
	a=a-b;
	b=a+b;
	a=b-a;
	cout<<"a is "<<a;
	cout<<"\nb is "<<b;
}
int main()
{
	swap<int>(2,3);
	return 0;
}