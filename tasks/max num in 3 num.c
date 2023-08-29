#include<stdio.h>
main()
{
	int num1,num2,num3;
	printf("Enter a number1 = ");
	scanf("%d",&num1);
	printf("Enter a number2 = ");
	scanf("%d",&num2);
	printf("Enter a number3 = ");
	scanf("%d",&num3);
	if(num1>num2)
	{
		printf("num1 is greater");
	}
	
   else if(num2>num3)
	{
		printf("num2 is greater");
		
			}
			else if(num1<num3) {
				printf("num3 is greater");
			}
			else if(num2<num3)
			{
				printf("num3 is greater");
			}
			else
			{
				printf("all are equal");
			}
	}