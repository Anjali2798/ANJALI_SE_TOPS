#include<stdio.h>
int main()
{
	float radius,area;
	printf("Enter the radius of a circle:");
	scanf("%f",&radius);
	area=3.14*radius*radius;
	printf("The are of a circle is %f",area);
	return 0;
}