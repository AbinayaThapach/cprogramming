#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("Enter a string: ");
	gets(str);
	strupr(str);
	printf("The entered string in uppercase is %s",str);
	return 0;
	
}
