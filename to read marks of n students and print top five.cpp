#include<stdio.h>
main()
{
	int nums[50],i,j,n,temp;
	do{
		scanf("%d",&n);
		
	}while(n<5);
	for(i=0;i<n;i++)
	{
		scanf("%d",&nums[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(nums[i]<nums[j])
			{
			temp=nums[i];
			nums[i]=nums[j];
			nums[j]=temp;
			
		}
	}
}
for(i=0;i<5;i++)
printf("%d",nums[i]);
}
