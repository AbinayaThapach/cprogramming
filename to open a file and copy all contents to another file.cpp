#include<stdio.h>
main()
{
	FILE *fp,*fd;
	fp=fopen("a.txt","w+");
	fd=fopen("b.txt","w");
	char c;
	while(c=getchar()!='\n')
	fputc(c,fp);

while(c=fgetc(fp)!=EOF)
{
	fputc(c,fd);

}
fclose(fp);
fclose(fd);

	
}
