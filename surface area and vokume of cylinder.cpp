#include<stdio.h>
#define pie 3.1415
main()
{
int r,h;
float a,v;
printf("Enter the radius and height of cylinder");
scanf("%d %d ",&r,&h);
a=2*pie*r*(r+h);
v=pie*r*r;
printf("%f \t %f is the surface area and volume of cylinder ",a,v);
	
}

