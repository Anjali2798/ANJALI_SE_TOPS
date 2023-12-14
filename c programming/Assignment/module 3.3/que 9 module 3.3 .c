//Write a program of structure employee that provides the following 
//information -print and display empno, empname, address and age
#include<stdio.h>
struct employee_information
{
	int empno;
	char empname[20],address[20];
	int age;
};
main()
{
	struct employee_information e;
	printf("enter the employee number ");
	scanf("%d",&e.empno);
	
	printf("enter the employee name ");
	scanf("%s",&e.empname);
	
	printf("enter the employee address ");
	scanf("%s",&e.address);
	
	printf("enter the employee age ");
	scanf("%d",&e.age);
	
	printf("\nemployee no. %d",e.empno);
	printf("\nemployee name %s",e.empname);
	printf("\nemployee address %s",e.address);
	printf("\nemployee age %d",e.age);
}
