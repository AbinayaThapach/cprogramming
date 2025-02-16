#include<stdio.h>
void conversion(char*);
main()

{
	char input;
	scanf("%c",&input);
	conversion(&input);
	printf("%c",input);
	

}
void conversion(char *c)
{
	if(*c>=97&&*c<=122)
	*c=*c-32;
	else if(*c>=65&&*c<=90)
	*c=*c+32;
}
