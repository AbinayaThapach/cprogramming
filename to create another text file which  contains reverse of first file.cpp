#include<stdio.h>
#include<string.h>
main()
{
	char txt[100],rev[100];
	int i=0,j,len;
	FILE *f1,*f2;
	f1=fopen("first.txt","w");
	f2=fopen("second.txt","w");
	gets(txt);
	fputs(txt,f1);
	len=strlen(txt);
	for(i=len-1;j=0,i>=0;i--,j++)
	{
rev[j]=txt[i];
	}
	fputs(rev,f2);
	fclose(f1);
	fclose(f2);
	
}
