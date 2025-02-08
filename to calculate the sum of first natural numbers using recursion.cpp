#include<stdio.h>
int sumnatural(int);
int main(void)
{
	int n,sum;
	printf("Enter n");
	scanf("%d",&n);
	sum=sumnatural(n);
	printf("the sum of first natural numbers is %d",sum);
	return 0;

}
int sumnatural(int num)

{
	if(num<=1)
	return 1;
	return num+sumnatural(num-1);
}
