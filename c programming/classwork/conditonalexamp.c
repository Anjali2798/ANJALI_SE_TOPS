#include<stdio.h>

void main()
{
	int age;
	printf("\nEnter Your Age :");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("\nYou are eligible to vote");
	}
	else
	{
		printf("\nYou are non-eligible to vote");
	}
}