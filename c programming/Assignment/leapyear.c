#include<stdio.h>
int main()
{
	int days;
    printf("\nEnter days= ");
    scanf("%d",&days);
    (days>365)? printf("year is leap year"): printf("year is not a leap year");
}