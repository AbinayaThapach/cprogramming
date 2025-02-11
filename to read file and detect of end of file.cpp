#include<stdio.h>
main()
{

FILE  *fp;
char c;
fp=fopen("student.txt","r");
while((c=fgetc(fp))!=EOF)
{
	printf("%c",c);
	}
	fclose(fp);	
}
