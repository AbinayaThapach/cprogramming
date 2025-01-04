#include<stdio.h>
main()
{
	char name[40],mar[40];
	printf("Enter the name and martial status of girl");
	scanf("%s %s",name,mar);
	if(mar=="yes")
	printf("mrs%s",name);
	else
	printf("miss%s",name);
	
	}
