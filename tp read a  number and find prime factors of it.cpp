#include<stdio.h>
main()
{
	int num,i=1,j,k;
	scanf("%d",&num);
	while(i<=num)
	{
		k=0;
		if(num%i==0)
		{
			j=1;
			while(j<=i)
			{
				if(i%j==0)
				k++;
				j++;
			}
			if(k==2)
			{
				printf("%d",i);
			}
		}
		i++;
	}
}

