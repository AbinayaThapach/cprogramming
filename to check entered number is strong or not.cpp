#include<stdio.h>
main()
{
	int num,i,f,r,sum=0,temp;
	scanf("%d",&num);
	temp=num;
	while(num)
	{
		i=1,f=1;
		r=num%10;
		while(i<=r)
		{
			f=f*i;
			i++;
		}
		sum=sum+f;
		num=num/10;
	}
	if(sum==temp)
	printf("It is strong number");
	else
	printf("it is not a strong number");
}
