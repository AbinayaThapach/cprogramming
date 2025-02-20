
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	
	if(islower(ch)==0)
	{
		printf("The character is not lowercase");
	}
	else
	{
		printf("the character is lowercase");
	}
	return 0;
}

