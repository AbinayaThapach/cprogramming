#include<stdio.h>
main()
{

int m[2][2],i,j,sum=0;	
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		scanf("%d",&m[i][j]);
		if(i==j)
		sum+=m[i][j];
	}
	

}
printf("The sum of trace of matrix is %d",sum);
}
