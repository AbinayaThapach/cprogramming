#include<stdio.h>

#include<string.h>
main()
{
	int arr[4]={1,2,3,4},i,a,b;
	for(i=0;i<1;i++)
	{
		
		a=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=a;
		b=arr[i+3];
		arr[i+3]=arr[i+2];
		arr[i+2]=b;
	}
	for(i=0;i<=3;i++)
	{
		printf("%d",arr[i]);
		
	}
	
	}
