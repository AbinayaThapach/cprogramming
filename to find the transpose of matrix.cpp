#include<stdio.h>
main()



{
	int a[2][2],b[2][2],c[2][2],d[2][2],i,j;

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d  ",&a[i][j]);
		}}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[j][i];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d ",	c[i][j]);
		}
	}
}
	
