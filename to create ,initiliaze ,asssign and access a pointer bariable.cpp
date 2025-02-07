#include<stdio.h>
main()
{
	int a=5,*p;
	p=&a;
	printf("the address and value of pointer is %d %d",p,*p);
}
