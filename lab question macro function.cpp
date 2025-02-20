
#include<stdio.h>
#define sum(a,b) a+b
#define prod(a,b) a*b

int main()
{
	int a,b,sum,product;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	
	sum=sum(a,b);
	product=prod(a,b);
	
	printf("Sum=%d\nProduct=%d",sum,product);
}

