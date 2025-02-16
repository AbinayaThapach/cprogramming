#include<stdio.h>
main()
{
	long int decinum,binnum,revsum=0,q,r,i=1;
	scanf("%ld",&decinum);
	do{
		q=decinum/2;
		r=decinum%2;
		decinum=q;
		revsum+=r*i;
		i*=10;
	}while(q!=0);
	printf("%ld",revsum);
	
}
