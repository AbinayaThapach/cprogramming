#include<stdio.h>
main()
{
	int p=1,q=2,c,i=1,j,n,co=0;
	scanf("%d",&n);
	while(co<=n)
	{
		c=p+q;
		for(i=q+1;i<c&&c++<n;i++)
		printf("%d",i);
		p=q;q=c;
	}
	
}
