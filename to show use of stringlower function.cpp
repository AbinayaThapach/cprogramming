
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("Enter a string: ");
	gets(str);
	strlwr(str);
	printf("The entered string in lowercase is %s",str);
	return 0;
	
}

