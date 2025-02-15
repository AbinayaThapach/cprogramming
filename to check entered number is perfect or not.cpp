#include<stdio.h>
main()
{
	int n,i=1,sum=0;
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		sum=sum+i;
		i++;
	}
	if(sum==n)
	printf("%d is a perfect number",i);
	else
	printf("%d is not perfect number",i);
}
