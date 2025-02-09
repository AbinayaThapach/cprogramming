#include<stdio.h>
main()
{
	int marks[3],i,sum=0;
	float avg;
	for(i=0;i<3;i++)
	{
		scanf("%d",marks+i);
		sum+=*(marks+i);
	}
	avg=sum /3;
	printf("%f",avg);
	
}
