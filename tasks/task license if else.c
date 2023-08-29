#include<stdio.h>
main()
{
	int age;
	printf("Enter the age = ");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("person will get a license");
	}
	else
	{
		printf("Person will not get a license");
	}
}