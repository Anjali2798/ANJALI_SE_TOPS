//WAP to print factorial of given number
#include<stdio.h>
main()
{
	int i,num,f=1;
	printf("enter the number ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	     f=f*i;
	}
	printf("factorial of %d is %d",num,f);
}