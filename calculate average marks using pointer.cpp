#include<stdio.h>
main()
{
	int marks[10],i,sum=0;
	float avg;
	for(i=0;i<10;i++)
	{
		scanf("%d",marks+i);
		sum+=*(marks+i);
	}
	avg=sum/10;
	printf("the average is %f",avg);
}
