#include<stdio.h>
void calculate(int[],int);
main()
{
	int num[10],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&num[i]);
	calculate(num,n);
	
}
void calculate(int ns[],int n)
{
	long sum=0,product=1;
	int i;
	for(i=0;i<n;i++)
	{
		if(ns[i]%2==0)
		sum+=ns[i];
		else
		product*=ns[i];
	}
	printf("tjr sum of even numbers and odd numbers is %ld %ld ",sum,product)
;}
