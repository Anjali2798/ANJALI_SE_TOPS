//? WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 
//82746
#include<stdio.h>
main()
{
	 int num,reverse=0,remainder;
	 printf("enter number ");
	 scanf("%d",&num);
	 while(num!=0)
	 {
	 	remainder=num%10;
	 	reverse=reverse*10+remainder;
	 	num=num/10;
	 }
	 printf("reverse number is %d",reverse);
	 
}