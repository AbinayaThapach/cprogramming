#include<stdio.h>
main()
{
	int marks[1][2][2],i,j,k;
	for(i=0;i<1;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				scanf("%d",&marks[i][j][k]);
			}
		}
	
	for(i=0;i<1;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("%d ",marks[i][j][k]);
			}
			
		}
	}}
}
