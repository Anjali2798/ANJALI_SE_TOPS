#include<stdio.h>
int main()
{
	//WAP of Addition, Subtraction, Multiplication and Division using Switch 
//case.(Must Be Menu Driven) 
      int a,b;
      char choice;
      printf("select your choice below : ");
      printf("\ne for addition \nf for subtraction \nc for multiplication \nd for division \n ");
      scanf("%c",&choice);
      printf("enter the value of a ");
      scanf("%d",&a);
      printf("enter the value of b ");
      scanf("%d",&b);
      switch(choice)
      {
      	case 'e':
      	printf("addition of a and b is %d ",a+b);
      	break;
      	case 'f':
      		printf("subtraction of a and b is %d ",a-b);
      		break;
      	case 'c':
      		printf("multiplication of a and b is %d ",a*b);
      		break;
      	case 'd':
      		printf("division of a and b is %d ",a/b);
      		break;
      	default:
		  printf("invalid input of number,kindly check again");	
      	
      	
	  }
}