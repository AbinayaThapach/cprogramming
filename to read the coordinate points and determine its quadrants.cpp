#include<stdio.h>
main()
{
	int x,y;
	printf("Enter the value of x and y");
	scanf("%d %d ",&x, &y);
	if(x>=0&&y>=0)
	printf("the point lies in first quadrant");
		if(x<=0&&y>=0)
	printf("the point lies in secondquadrant");
		if(x<=0&&y<=0)
	printf("the point lies in third quadrant");
		if(x>=0&&y<=0)
	printf("the point lies in fourth quadrant");
}
