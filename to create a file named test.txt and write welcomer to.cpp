#include<stdio.h>
main()
{
	FILE *fptr;
	fptr=fopen("test.txt","w");
	fputs("Welcome to my college",fptr);
	fclose(fptr);
}
