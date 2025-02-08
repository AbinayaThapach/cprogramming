#include<stdio.h>
int reverse(int);
main()
{
	int num,rev;
	printf("Enter a number");
	scanf("%d",&num);
	rev=reverse(num);
	printf("%d",rev);
}
int reverse(int num)
{
	int static  sum=0;
	int r;
	if(num>0)
	{
		r=num%10;
		sum=sum*10+r;
		reverse(num/10);
		
			}
			else
			return sum;
			return sum;
}
