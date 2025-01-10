#include<stdio.h>
#include<math.h>
main()
{
	int r,a,s,n;
	printf("Enter the common ratio ,first term and no of terms");
	scanf("%d %d %d",&r,&a,&n);
	s=a*((pow(r,n)-1)/(r-1));
	printf("the sum of geometric progession is %d",s);
	
}
