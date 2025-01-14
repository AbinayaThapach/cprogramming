#include<stdio.h>
main()
{
	int arr[5],i,sum=0,pro=1;
	printf("Enter the numbers");
	for(i=0;i<5;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
		pro=pro*arr[i];
	}
	printf("%d %d",sum,pro);
}
