#include<stdio.h>
main()
{
	int n;
	char s[30];
	scanf("%d  ",&n);
	n=n%2==0?2:1;
	if(n%2==0)
	printf("it is even");
	else
	printf("it is odd");
;
}

