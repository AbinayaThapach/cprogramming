#include<stdio.h>
#include<string.h>
struct emp{
	char post[10];
	int salary;
};
main()
{
	FILE *fp;
	fp=fopen("emp.dat","w+");
	int i;
	struct emp e[3];
	for(i=0;i<3;i++)
	{
		scanf("%s %d",e[i].post,&e[i].salary);
		
	}
	fwrite(&e,sizeof(struct emp),3,fp);
	rewind(fp);
	while(fread(&e,sizeof(struct emp),3,fp)==0)
	{
		if(strcmp(e[i].post,"manager")==0)
	printf("found");
	
	}
	fclose(fp);
	
}
