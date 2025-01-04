#include<stdio.h>
#include<math.h>
main()

{
	int a,b,c,r1,r2;
	printf("Enter the value of a,b,c");
	scanf("%d %d %d ",&a,&b,&c);
	r1=(-b+sqrt(b*b-4*a*c))/2*a;
	r2=(-b-sqrt(b*b-4*a*c))/2*a;
	printf("%d %d are the roots of quadratic equation",r1,r2);
	
	
}

