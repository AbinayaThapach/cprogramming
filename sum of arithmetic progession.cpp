#include<stdio.h>
main()
{
	int a,d,n,s;
	printf("Enter the first term common difference and no of terms");
	scanf("%d %d %d",&a,&d,&n);
	s=(n/2)*(2*a+(n-1)*d);
	printf("The sum of arithmetic progression is %d",s);
	
	
}
