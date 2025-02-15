#include<stdio.h>
long int fact(int n)
{
	int i;
	long int f=1;
	for(i=1;i<=n;i++)
	{
	f=f*1;}
	return f;
	
	
}
main()
{
	int num=5;
	printf("the factorial is % ld",fact(num));
}
