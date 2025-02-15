#include<stdio.h>
float convert(float centi)
{
	float fah;
	fah=9/5*centi+32;
	return fah;
}
main()
{
	float c,f;
	scanf("%f",&c);
	f=convert(c);
	printf("The  conversion is %f",f);
}
