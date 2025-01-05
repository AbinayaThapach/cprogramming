#include<stdio.h>
main()
{
	int sum=0,n,i;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	sum=sum+i;}
	printf("the sum from 1 to N is %d",sum);
}
