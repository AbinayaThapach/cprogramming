#include<stdio.h>
main()
{
	int n,num[50],i,j,temp;
	printf("emter the ballie od m");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(num[i]>num[j])
			{
			temp=num[i];
			num[i]=num[j];
			num[j]=temp;}
		}
	}
	for(i=0;i<n;i++)
	{printf("%d\n",num[i]);
	}
	
}