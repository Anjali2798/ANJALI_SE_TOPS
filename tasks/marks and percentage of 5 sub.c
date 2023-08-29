#include<stdio.h>
main()
{
	int maths,science,english,gujarati,hindi,total,percentage;
	printf("Enter maths marks = ");
	scanf("%d",&maths);
	printf("Enter science marks = ");
	scanf("%d",&science);
	printf("Enter english marks = ");
	scanf("%d",&english);
	printf("Enter gujarati marks = ");
	scanf("%d",&gujarati);
	printf("Enter hindi marks = ");
	scanf("%d",&hindi);
	total = maths+science+english+gujarati+hindi;
	printf("Total of 5 subjects are %d ",total);
	percentage=(total*100)/250;
	printf("\nPercentage is %d",percentage);
	if(percentage>=75)
	{
		printf("\nyou get distiction");
	}
	else if(percentage>=60)
	{
		printf("\nyou get first class");
	}
	else if(percentage>=50)
	{
		printf("\nyou get second class");
	}
	else if(percentage>=40)
	{
		printf("\nyou get third class");
	}
	else
	{
		printf("\nyou are fail");
	}
	                            
	
	
}