//WAP to print Fibonacci series up to given number#include<stdio.h>
main()
{
	int first_term=0,second_term=1,third_term,i,number;
	printf("enter number ");
	scanf("%d",&number);
	printf("\n%d %d ",first_term,second_term);
		for(i=2;i<number;i++)
	{
		third_term=first_term+second_term;
		printf(" %d",third_term);
		first_term=second_term;
		second_term=third_term;
	}

}