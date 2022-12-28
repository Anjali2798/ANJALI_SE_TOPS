#include<stdio.h>

void main()
{ 
 int a,b;
 printf("\nEnter A =");
 scanf("%d",&a);
 printf("\nEnter B =");
 scanf("%d",&b);
 printf("A =%d B =%d",a,b);
 if(a>b)
 {
 	printf("\n%d value is greater than a",a);
 }
 else
 {
 	printf("\n%d value is greater than a",b);
 }
}