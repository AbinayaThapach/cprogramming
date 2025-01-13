#include<stdio.h>
main()
{
	int n;
	char ch;
	do{
		printf("Enter the number");
		scanf("%d",&n);
		if(n>0)
		printf("%d is positive",n);
		else if(n==0)
		printf("%d is zero",n);
		else
		printf("%d is negative",n);
printf("do you want to quit");

scanf("%c",&ch);		
		
		
		
	}while(ch!='y');
}
