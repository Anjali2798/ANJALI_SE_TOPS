#include<stdio.h>
main()
{
	float years,convert_years_into_days;
	printf("Enter years = ");
	scanf("%f",&years);
	convert_years_into_days=years*365;
	printf("\ndays are %f",convert_years_into_days);
	
	
	float days,convert_days_into_years;
	printf("\nenter days ");
	scanf("%f",&days);
	convert_days_into_years=days/365;
    printf("\nTotal year is %f",convert_days_into_years);

}





    