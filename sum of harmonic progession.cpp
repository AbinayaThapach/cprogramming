#include<stdio.h>
#include<math.h>
main()
{
	int a,n,d;
	float s;
	printf("Enter the first term ,common difference and no of terms");
	scanf("%d %d %d",&a,&d,&n);
	s=(1/d)*log(((2*a+(2*n-1)*d)/(2*a-d)));
	printf("The sum of harmoic progession is %f",s);
}
