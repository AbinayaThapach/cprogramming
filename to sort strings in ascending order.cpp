#include<stdio.h>

#include<string.h>
main()
{
	char b[30]="Hari",a[30]="Krishna",c[30];
	int i,j;
	if(strcmp(a,b)>0)
	{
		strcpy(c,a);
	
	strcpy(a,b);
	strcpy(a,c);
	}
	printf("the strings in ascending order is %s %s",a,b);












	
}
