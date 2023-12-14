//Write a program of structure employee that provides the following 
//information -print and display empno, empname, address and age
#include<stdio.h>
struct employee_information
{
	int empno;
	char empname[20],address[20];
	int age,i;

};
main()
{
	struct employee_information e;
	int i;
	for(i=1;i<=5;i++){
	
	printf("\nenter the employee number ");
	scanf("%d",&e.empno);
	
	printf("\nenter the employee name ");
	scanf("%s",&e.empname);
	
	printf("\nenter the employee address ");
	scanf("%s",&e.address);
	
	printf("\nenter the employee age ");
	scanf("%d",&e.age);
	
	printf("\nemployee no. %d",e.empno);
	printf("\nemployee name %s",e.empname);
	printf("\nemployee address %s",e.address);
	printf("\nemployee age %d",e.age);
	
}
}
