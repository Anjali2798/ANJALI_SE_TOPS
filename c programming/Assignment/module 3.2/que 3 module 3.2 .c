//WAP to find number is even or odd using ternary operator
#include<stdio.h>
main()
{
	int a;
	printf("enter the value of a ");
	scanf("%d",&a);
	(a%2==0) ? printf("even number") : printf("odd number");
}