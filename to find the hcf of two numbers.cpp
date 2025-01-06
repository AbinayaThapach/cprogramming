#include<stdio.h>
main()
{
	int a,b,h,i,m;
	printf(" Enter the value of a and b");
	scanf("%d %d",&a,&b);
	m=(a<b)?a:b;
	for(i=1;i<=m;i++)
	{
		if(a%i==0&&b%i==0)
		h=i;
	}
printf("The hcf of the two numbers is %d",h);	
	
	
	
}
