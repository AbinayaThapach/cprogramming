#include<stdio.h>
main()
{
	int m[2][2],i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			m[i][j]=m[i][j]+2;
}}
for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{ printf("%d",m[i][j]);
	}}
}
