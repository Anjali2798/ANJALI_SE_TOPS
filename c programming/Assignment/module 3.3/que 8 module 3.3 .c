#include<stdio.h>
#include<string.h>
main()
{
	char s1[20];
	char s2[20];
	printf("s1 ");
	gets(s1);
	
	
	
	strcpy(s2,s1);
	strrev(s2);
                  
	
 if(!strcmp(s1,s2))
	{
	  printf("\nit is  pallindrome");	
	}
	else
	{
		printf("\nit is not pallindrome");
	}
}  