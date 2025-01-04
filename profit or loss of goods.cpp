#include<stdio.h>
main()
{
	int sp,cp,p,l;
	printf("Enter the selling price and cost price of product");
	scanf("%d %d",&sp,&cp);
	if(sp>cp)
	{
	p=sp-cp;
	printf("%d is profit",p);
}
	else{
	 
	l=cp-sp;
	printf("%d is loss",l);
}

}
