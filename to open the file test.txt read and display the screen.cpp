#include<stdio.h>
main()
{
	FILE *fptr;
	char s[100];
	fptr=fopen("test.txt","r");
	fgets(s,100,fptr);
	printf("%s",s);
	fclose(fptr);
}
