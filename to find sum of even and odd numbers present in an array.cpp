
#include<stdio.h>
main()
{
	int n[4],i,sume=0,sumo=0;
	for(i=0;i<4;i++)
	scanf("%d",& n[i]);
	for(i=0;i<4;i++)
	{
		if(n[i]%2==0)
		sume=sume+n[i];

	
		else
		sumo=sumo+n[i];
	}
	printf("the sum of odd and even  numbera is %d %d",sumo,sume);
}
