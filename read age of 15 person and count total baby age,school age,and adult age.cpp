#include<stdio.h>
main()
{
	int age,n=1,cb=0,cs=0,ca=0;
	while(n<=15)
	{
		printf("Enter the age");
		scanf("%d",&age);
		if(age<=7)
		cb+=1;
		else if ( age>=7&&age<=25)
		cs+=1;
		else
		ca+=1;
		 n+=1;
	}
	printf("%d %d %d is the no of count of baby age ,school age and adult age",cb,cs,ca);
}
