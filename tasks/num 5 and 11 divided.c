#include<stdio.h>
main()
{
	int num;
	printf("Enter num = ");
	scanf("%d",&num);
	if(num%5==0)
	{
		printf("num is divided by 5");
	}
	else if(num%11==0)
	{
		printf("num is divided by 11");
	}
}