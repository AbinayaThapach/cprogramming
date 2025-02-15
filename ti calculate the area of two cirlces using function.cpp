#include<stdio.h>
#define pie 3.1428
float area(float r)
{
	return (pie*r*r);
}
main()
{
	float r1,r2,a1,a2;
	scanf("%f %f",&r1,&r2);
	a1=area(r1);
	a2=area(r2);
	printf("the area is %f %f",a1,a2);
	

}

