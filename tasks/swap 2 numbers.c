#include<stdio.h>
main()
{
	int x;//12
	int y;//13
	
	printf("x = ");
	scanf("%d",&x);
	printf("y = ");
	scanf("%d",&y);
	x=x+y;//25
	y=x-y;//12
	x=x-y;//13
	
	printf("x = %d",x);
	printf("y = %d",y);
}