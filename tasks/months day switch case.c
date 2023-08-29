#include<stdio.h>
main()
{
	int month;
	printf("Enter month ");
	scanf("%d",&month);
	switch(month)
	{
	    case 1:
		 printf("days 31");
		 break;	
		case 2:
		 printf("days 28/29"); 
		 break;
		case 3:
		 printf("days 31"); 
		 break;
		case 4:
		 printf("days 30");
		 break;
		case 5:
		 printf("days 31");
		 break;
		case 6:
		 printf("days 30");
		 break;
		case 7:
		 printf("days 31");
		 break;
		case 8:
		 printf("days 31");
		 break;
		case 9:
		 printf("days 30");
		 break;
		case 10:
		 printf("days 31");
		 break;
		case 11:
		 printf("days 30");
		 break;
		case 12:
		 printf("days 31");
		 break;
		 default:
		  printf("Invalid input");          
		 
	}
}