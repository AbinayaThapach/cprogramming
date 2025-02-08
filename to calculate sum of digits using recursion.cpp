#include<stdio.h>
int sumo(long);
main()
{
	long n;
	int sum;
	scanf("%ld",&n);
	sum=sumo(n);
	printf("%d",sum);
}
int sumo(long num)
{
	static int i=1,sum=0;
	int digit;
	if(i<=5)
	{
		digit =num%10;
		sum+=digit;
		num/=10;
		i++;
		sumo(num);
	
	}
	return sum;
}
