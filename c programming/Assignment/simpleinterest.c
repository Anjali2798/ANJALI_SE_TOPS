#include<stdio.h>
int main()
{
	float principle,time,rate,simple_interest;
	printf("\nprinciple=");
	scanf("%f",&principle);    
    printf("\ntime=");
    scanf("%f",&time);
    printf("\nrate=");
    scanf("%f",&rate);
    simple_interest=(principle*time*rate)/100;
    printf("simple interest is %f",simple_interest);
    
}