#include<stdio.h>
main()
{
	int a=3,b=4,*p,*q,temp;
	p=&a;
	q=&b;
	temp=*p;
	*p=*q;
	*q=temp;
	printf("the values after swapping is %d %d",a,b);
	
}
