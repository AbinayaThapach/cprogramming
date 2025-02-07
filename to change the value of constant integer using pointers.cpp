#include<stdio.h>
main()
{
	int a=4,*p;
	p=&a;
	*p=*p+1;
	printf("%d is changed value ",a);
	
}
