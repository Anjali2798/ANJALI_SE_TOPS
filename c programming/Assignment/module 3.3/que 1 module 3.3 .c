//maximum value of array
#include<stdio.h>
main()
{
	int a[20],max,size,i;
	printf("enter the size of array ");
	scanf("%d",&size);
	printf("enter the elements of array ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<size;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		
	}
	printf("maximum value of array is %d",max);
}