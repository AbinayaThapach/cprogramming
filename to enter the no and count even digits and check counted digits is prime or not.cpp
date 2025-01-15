#include<stdio.h>
main()
{
	int r,n,ce=0,c=0,i;
	printf("Enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		n= n/10;
		if(r%2==0)
		{
			ce=ce+1;
		}
	}
	for(i=1;i<=ce;i++)
	{
		if(ce%i==0)
		{
			c=c+1;
		}
		
	}
	if(c==2)
	printf("the count of even digits is prime");
	else
	printf("the count of even digits is not prime");
	
}
