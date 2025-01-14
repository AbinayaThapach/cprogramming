#include<stdio.h>
main()
{
	int a[2][2],b[2][2],c[2][2],d[2][2],i,j,k;

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d  %d",&a[i][j],&b[i][j]);
		}}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{ c[i][j]=0;
		for(k=0;k<2;k++)
		{
		
			c[i][j]=c[i][j]+a[i][k]*b[k][j];}
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",c[i][j]);
		}
	}



}
