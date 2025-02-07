#include<stdio.h>
#include<math.h>
main()
{

int m[2][2],i,j,sum=0;	
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		scanf("%d",&m[i][j]);
		
		sum+=(pow(m[i][j],2));
	}
	

}
printf("The sum of notmal of matrix is %f",sqrt(sum));
}
