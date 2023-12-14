//factorial using recursion
#include<stdio.h>
int factorial(int num)
{
	
	if(num>1)
	{
		return num*factorial(num-1);
	}
}
main()
{
	int num;
	printf("enter a number ");
	scanf("%d",&num);
	printf("the factorial is %d",factorial(num));
}