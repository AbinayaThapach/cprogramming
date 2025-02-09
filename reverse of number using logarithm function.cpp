#include<stdio.h>
#include<math.h>
int rev(int);

main()

{ int n,r;
scanf("%d",&n);
r=rev(n);
printf("Reverse is %d",r);
}
int rev(int n)
{
	
	int digit=log10(n);
	if(digit==0)
	return n;
	else 
	return n%10*pow(10,digit)+rev(n/10);
}

