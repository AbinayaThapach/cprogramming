#include<stdio.h>
int a=10;
void fun()
{
	a=20;
	printf("%d",a++);
}
main()
{
	printf("%d",a);
	fun();
	printf("%d",a);
}
