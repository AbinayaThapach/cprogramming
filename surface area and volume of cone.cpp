#include<stdio.h>
#define pie 3.1415
main()
{
int r,h,l;
float a,v;
printf("Enter the radius ,lengthand height of cone");
scanf("%d %d %d ",&r,&h,&l);
a=pie*r*(r+l);
v=(pie*r*h)/3;
printf("%f \t %f is the surface area and volume of cone ",a,v);
	
}

