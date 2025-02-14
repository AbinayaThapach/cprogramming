#include<stdio.h>
main()
{
	struct employee
	{
		char name[20];
		int age;
		float salary;
	};
	struct employee emp;
	FILE *fptr;
	fptr=fopen("employee.dat","wb");
	printf("enter all information");
	scanf("%s %d %f",emp.name,&emp.age,&emp.salary);
	fwrite(&emp,sizeof(emp),1,fptr);
}
