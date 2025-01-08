#include<stdio.h>
main()
{
	int i,j,s;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(s=1;s<=5-i;s++)
		{
			printf(" ");
		}
	


	
	
	
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
