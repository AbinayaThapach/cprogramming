#include<stdio.h>
main()
{
	int  n,i;
float sum=0,j;
printf("Enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{j=(float)(i*(i+1))/(i+2);
	sum=sum+j;
	

}
printf("The sum of the series is %f",sum);
}
