#include<stdio.h>
float power(float base,int exponent)

{
	return (base*power(base,exponent-1));
	}
	main()
	{
		float y,x;
		int n;
		scanf("%d %f",&n,&x);
		y=power(x,n);
		printf("%f",y);
	}
