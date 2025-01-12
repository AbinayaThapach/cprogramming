#include<stdio.h>
main()
{
	int x,n,i,j,f;
	float y;
	printf("Enter the number of terms,x");
	scanf("%d %d",&n,&x);
	float sum=x;
	for(i=2;i<=n;i=i+2){
		
		 f=1;
		 for(j=1;j<=i;j++){
		 	
		 	f=f*j;
		 }
		 y= (float)x/f;
		 sum=sum+y;
		
	}
	printf("the sum of the series is %f",sum);
}
