#include<stdio.h>
main()
{

int m,n,tmp,sum=0,c=0;
float avg;
scanf("%d %d",&m,&n);

	
	
	while(m<=n)
	{
		sum=sum+m;
		m++;
		c++;}
		
		avg=(float)sum/c;
		printf("the sum and average is %d %f",sum,avg);	
}
