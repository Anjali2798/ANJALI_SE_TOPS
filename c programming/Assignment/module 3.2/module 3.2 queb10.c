//Write a program you have to make a summation of first and last Digit. (E.g., 
//1234 Ans: -5)
#include<stdio.h>
main()
{
	int num,first_digit,last_digit,sum;
	printf("enter number ");
	scanf("%d",&num);
	
     	last_digit=num%10;
     	first_digit=num;
	
	while(num>=10)
	{
		num=num/10;
  }
  first_digit=num;
  sum=first_digit+last_digit;
  printf("sum of first and last digit is %d",sum);
}