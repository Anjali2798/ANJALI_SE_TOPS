#include<stdio.h>
main()
{
	//? Write a program make a summation of given number (E.g., 1523 Ans: -11 
		int num,sum=0,digit;
	printf("enter number ");
	scanf("%d",&num);
	while(num>0)
	{
		digit=num%10;
	     sum=sum+digit;
	     num=num/10;
		
		
	
	}
	printf("sum is %d",sum);
}
