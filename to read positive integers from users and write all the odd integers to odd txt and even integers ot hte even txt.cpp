#include<stdio.h>
main()
{
	FILE*fo,*fe;
	fo=fopen("odd.txt","w");
	fe=fopen("even.txt","w");
	int arr[5],i;
	for(i=0;i<5;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		fprintf(fe,"%d",arr[i]);
		else
		fprintf(fo,"%d",arr[i]);
	}
	fclose(fe);
	fclose(fo);
	
}
