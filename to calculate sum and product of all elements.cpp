#include<stdio.h>

#include<string.h>
main()
{
	int arr[5],sum=0,pro=1,i;
for(i=0;i<5;i++)
{
	scanf("%d ",& arr[i]);
	
	}
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
		pro=pro*arr[i];
		
		
		}
		printf("the sum and product of all elements in array is %d %d",sum,pro);
	}
