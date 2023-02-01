#include<stdio.h>
int main()
{
	//years into days
	int years,day,convert_years_into_days;
    printf("\nNumber of years=");
    scanf("%d",&years);
    printf("Day=");
    scanf("%d",&day);
    convert_years_into_days=years*day;
    printf("Total days are %d",convert_years_into_days);
    
    //days into years
    float Days,convert_days_into_years;
    printf("\nNumber of Day=");
    scanf("%f",&Days);
    convert_days_into_years=Days/365;
    printf("Total years are %f",convert_days_into_years);
  
}