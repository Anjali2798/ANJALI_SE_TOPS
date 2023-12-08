#include<stdio.h>
/*Write a program to find out the max from given number (E.g., No: -1562 
Max number is 6)*/

main()
{
	int num,max=0,digit;
	printf("enter number ");
	scanf("%d",&num);
	while(num>0)
	{
		digit=num%10;
		if(digit>max)
		{
			max=digit;
		}
		num=num/10;
	}
	printf("maximum is %d",max);
}