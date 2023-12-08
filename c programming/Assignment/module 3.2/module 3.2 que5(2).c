#include<stdio.h>
main()
{
	/*2. WAP to take 10 no. Input from user and find out … 3. How many Even numbers are there 
4. How many odd numbers are there 
5. Sum of even numbers 
6. Sum of odd numbers WAP to print table up to given numbers*/
        int i=1,num,odd=0,even=0;
        float b;
      while(i<=10)
      {
      	
      	printf("number %d = ",i);
      	scanf("%d",&num);
      	b=i%2;
      	{
      		printf("%d",i);
      		even=even+i;
      		b=1;
		  }
		  b=i%2;
		  while(i!=0)
		  {
		  	printf("%d",i);
		  	odd=odd+i;
		  	b=0;
		  }
      	i++;
      	
      	
	  }
	
}