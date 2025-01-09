#include<stdio.h>
#include<math.h>
main()
{
	int i,x,n;
	float sum=1;
	printf("Enter hte value of n");
	scanf("%d",&n);
	printf("Enter the value of x");
	scanf("%d",&x);
	for(i=1;i<=n;i++)
	{
	
		sum=sum+(1/pow(x,n));
	}
	printf("the sum of series is %f",sum);

		
	
	
}
