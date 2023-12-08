//WAP to swap two numbers without using third variable
#include<stdio.h>
main()
{
	int a,b; // 6 9
	printf("enter the value of a ");
	scanf("%d",&a);
	printf("enter the value of b ");
	scanf("%d",&b);
	a=a-b; // -3
	b=a+b; // -3+9 6
	a=b-a; // 6--3 9
	printf("after swaping value of a is %d \n",a);
	printf("after swaping value of b is %d \n",b);
}