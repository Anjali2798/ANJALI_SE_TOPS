#include<stdio.h>
main()
{
	/*2. WAP to take 10 no. Input from user and find out … 3. How many Even numbers are there 
4. How many odd numbers are there 
5. Sum of even numbers 
6. Sum of odd numbers WAP to print table up to given numbers*/
        int i,num,oddsum=0,evensum=0,ecount=0,ocount=0;
        for(i=1;i<=10;i++)
        {
        	printf("enter number ");
        	scanf("%d",&num);
        	if(i%2==0)
        	{
        		ecount++;
        		evensum=evensum+num;
			}
			else
			{
				ocount++;
				oddsum=oddsum+num;
			}
		}
		printf("oddcount = %d",ocount);
		printf("\noddsum = %d",oddsum);
		printf("\nevencount = %d",ecount);
		printf("\nevensum = %d",evensum);
      
      	
      	
	
	
}