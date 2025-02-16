#include<stdio.h>
main()
{
	int n[4],i,j,temp;
	for(i=0;i<4;i++)
	scanf("%d",&n[i]);
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(n[i]>n[j])
			{
				temp=n[i];
				n[i]=n[j];
				n[j]=temp;
			}
		}
	
	}
	printf("the second largest number is %d",n[2]);
	
}
