#include<stdio.h>
int multiply(int,int);
 main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=multiply(a,b);
	printf("%d",c);
}
int multiply(int a,int b)
{
	static int pr=0,i=0;
	if(i<a)
	{
		pr=pr+b;
		i++;
		multiply(a,b);
	}
	return pr;
}

