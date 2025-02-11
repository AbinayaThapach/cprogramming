#include<stdio.h>
main()
{FILE *fp;
char c;
fp=fopen("test.txt","w+b");
fputs("welcone to my college",fp);
rewind (fp);
while(c=fgetc(fp)!=	EOF)
{
	printf("%c",c);
}
fclose(fp);
	
}
