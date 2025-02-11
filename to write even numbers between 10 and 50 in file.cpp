#include<stdio.h>
main()
{
	FILE *fp;
	int i;
	fp=fopen("evennums.txt","w");
	for(i=10;i<=50;i++)
	{
		if(i%2==0)
		{fprintf(fp,"%d",i);
		}
		fclose(fp);
	}
}

