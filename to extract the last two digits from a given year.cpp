#include<stdio.h>
main()
{
	int year,r,n=0;
	printf("Enter the year");
	scanf("%d",&year);
	while(year>=100)
	{
		r=year%10;
		n=n*10+r;
		year=year/10;
	}
	printf("The last two digits is %d",n);
	
}
