
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	
	if(isupper(ch)==0)
	{
		printf("The character is not uppercase");
	}
	else
	{
		printf("the character is uppercase");
	}
	return 0;
}

