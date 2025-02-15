#include<stdio.h>
main()
{
	int n[4],i,cp=0,cn=0,zc=0;
	for(i=0;i<4;i++)
	scanf("%d",& n[i]);
	for(i=0;i<4;i++)
	{
		if(n[i]>0)
		cp++;
		else if(n[i]<0)
		cn++;
		else
		zc++;
	}
	printf("the no of positive negative and zero is %d %d %d",cp,cn,zc);
}
