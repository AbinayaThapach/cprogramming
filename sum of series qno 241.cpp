#include<stdio.h>
main()
{
	int n,i,sign=1,sum=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+sign*i;
		sign=sign*-1;
		
	
	}
	printf("The sum of series is %d",sum);
	
	
	
}
