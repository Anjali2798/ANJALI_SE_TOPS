#include<stdio.h>
main()
{
	int side1,side2,side3;
	printf("\nEnter side1 = ");
	scanf("%d",&side1);
	printf("\nEnter side2 = ");
	scanf("%d",&side2);
	printf("\nEnter side3 = ");
	scanf("%d",&side3);
	if(side1==side2 && side2==side3 && side1==side3)
	{
		printf("triangle is equilateral");
	}
	else if(side2==side3 || side1==side2 || side1==side3)
	{
		printf("triangle is isosceles");
	}
	else
	{
		printf("triangle is scalene");
	}
}