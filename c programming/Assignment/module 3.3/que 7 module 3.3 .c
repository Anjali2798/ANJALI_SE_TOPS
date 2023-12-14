//7 WAP Find out length of string without using inbuilt function 
#include<stdio.h>
#include<string.h>
main()
{
	char name[20],count=0,i;
	printf("enter the name ");
	scanf("%s",&name);
	for(i=0;name[i]!='\0';i++)
	
	{
	
			count++;
		
	}
	printf("%d",count);

	
	
}