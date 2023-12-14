//WAP to take two Array input from user and sort them in ascending or 
//descending order as per user’s choice
#include<stdio.h>
main()
{
	int a[4],i,j,temp;
	printf("enter the elements ");
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
		printf("asscending order is  ");
	for(i=0;i<4;i++)
	{
		printf(" %d\n",a[i]);
	}
		printf("enter the elements ");
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
		printf("descending order is  ");
	for(i=0;i<4;i++)
	{
		printf(" %d\n",a[i]);
	}
	
	
}