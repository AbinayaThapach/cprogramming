#include<stdio.h>
int remainder(int *a,int *b)
{
	int c;
	c=*a%*b;
	return c;
}
main()
{
	int *p,*q,x=20,y=3,z;
	p=&x;
	q=&y;
	z=remainder(p,q);
	printf("the remainder is %d",z);
}
