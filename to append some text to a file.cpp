#include<stdio.h>
main()
{
	FILE *f;
	char c,filename[20];
	gets(filename);
	f=fopen(filename,"a");
	while(c=getchar()!='\n')
	{
		fputc(c,f);
	}
	fclose(f);
}
