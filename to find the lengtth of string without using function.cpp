
//C program to find string length without string function

#include<stdio.h>

int main()
{
	int l=0,i;
	char str[100];
	printf("Enter a string: ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		l++;
	}
	printf("The length of the string is %d",l);
	return 0;
}

