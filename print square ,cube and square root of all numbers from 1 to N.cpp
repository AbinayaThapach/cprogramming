#include<stdio.h>
#include<math.h>
main()
{
	int i,n;
	printf("Enter the numnber");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("the square ,cube and square root of %d is %d %d %f",i,i*i,i*i*i,pow(i,0.5));
	}
}
