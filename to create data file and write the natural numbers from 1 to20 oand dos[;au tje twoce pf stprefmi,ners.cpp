#include<stdio.h>
main()
{
	FILE *fp;
	fp=fopen("c.txt","w+");
	int i;
	for(i=1;i<=20;i++)
	{
		fprintf(fp,"%d ",i);
	}
	rewind(fp);
	while(fscanf(fp,"%d",&i)!=EOF)
	{
		printf("%d",2*i);
	}
	fclose(fp);
}
