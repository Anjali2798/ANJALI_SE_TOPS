#include<stdio.h>
main()
{
	int row,col;
	int i=65;
	for(row=1;row<=5;row++)
	{
	
		for(col=1;col<=row;col++)
		{
			
		printf(" %c",i);
	
			i++;
			
		}
		printf("\n");
	}
}