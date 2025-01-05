#include<stdio.h>
#include<math.h>
main()
{
	int p,t,r;
	float ci;
	printf("Enter the principal time and rate");
	scanf("%d %d %d",&p,&t,&r);
	ci=p*(pow(1+(r/100),t));
	printf("the compound interest is %f ",ci);
}
