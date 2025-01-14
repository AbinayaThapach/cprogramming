#include<stdio.h>
main()
{
	int a[2][2],b[2][2],c[2][2],d[2][2],i,j;

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d  %d",&a[i][j],&b[i][j]);
		}}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",c[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			d[i][j]=a[i][j]-b[i][j];
		}
	}

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",d[i][j]);
		}
	}
}
