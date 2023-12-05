#include<stdio.h>
main()
{
	int year;
	printf("Enter year ");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("Year is a leap year");
	}
	else
	{
		printf("year is  not leap year");
	}
}