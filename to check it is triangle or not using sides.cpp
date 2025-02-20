
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter length of first side: ");
	scanf("%f", &a);
	
	printf("\nEnter length of second side: ");
	scanf("%f", &b);
	
	printf("\nEnter length of third side: ");
	scanf("%f", &c);
	
	if(a+b>c && b+c>a && a+c>b)
	{
		printf("The triangle is valid.");
	}
	else
	{
		printf("The triangle is not valid.");
	}
	
	return 0;
	
}

