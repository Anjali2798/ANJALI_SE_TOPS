#include<stdio.h>
main()
//WAP to make simple calculator (operation include Addition, Subtraction, 
//Multiplication, Division, modulo)
{
          int a,b,c,d,addition,subtraction,multiplication,division,modulo;
          printf("enter the value of a ");
          scanf("%d",&a);
          printf("enter the value of b ");
          scanf("%d",&b);
          printf("enter the value of c ");
          scanf("%d",&c);
          printf("enter the value of d ");
          scanf("%d",&d);
          printf("addition is %d \n",a+b+c+d);
          printf("subtraction is %d \n",(a-b)-(c-d));
          printf("multiplication is %d \n",(a*b*c*d));
          printf("division is %d \n",(a/b)/(c/d));
          printf("modulo is %d \n",(a%b)%(c%d));
          


}