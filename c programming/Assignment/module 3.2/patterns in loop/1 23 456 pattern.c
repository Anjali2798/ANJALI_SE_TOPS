#include<stdio.h>
main()
{
	int row,col,i=1 ;
	for(row=1;row<=5;row++)
	{
	
		for(col=1;col<=row;col++)
		{
			
		printf(" %d",i);
	
			i++;
			
		}
		printf("\n");
	}
}