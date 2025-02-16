
#include<stdio.h>
#include<conio.h>
main()
{
	 int a,b,c;
	 printf("Entee the value of a,b,c");
	 scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a<c||a<b&&a>c)


	printf("the second largest number is %d",a);
	 else if(a>b&&c<b||a<b&&c>b)


	printf("the second largest number is %d",b);
else

	printf("the second largest number is %d",c);
}
