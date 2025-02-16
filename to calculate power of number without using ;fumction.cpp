#include<stdio.h>
main()
{
int i,m,n,result=1;
scanf("%d %d",&m,&n);
for(i=1;i<=n;i++)
{
	result=result*m ;
}
printf("%d",result);
}

