#include<stdio.h>
main()
{
int(*a)[2],(*b)[2],(*sum)[2],i,j;
for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		scanf("%d",*(a+i)+j);	}}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",*(b+i)+j);}}
			for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			*(*(sum+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
			printf("%d",*(*(sum+i)+j));}}
			
}
