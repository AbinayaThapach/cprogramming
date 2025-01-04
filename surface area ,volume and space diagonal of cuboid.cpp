#include<stdio.h>
#include<math.h>
main()
{
int b,h,l;
float a,v,d;
printf("Enter the length ,breadth and height of cuboid");
scanf("%d %d %d  ",&l,&b,&h);
a=2*(l*b+b*h+l*h);
v=l*b*h;
d=sqrt(l*l+b*b+h*h);
printf("%f \t %f\t%f is the surface area and volume and space diagonal  of cuboid ",a,v,d);
	
}

