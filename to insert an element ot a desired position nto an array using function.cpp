#include<stdio.h>
void  insert(int [],int,int);
main()
{
	int a[3],e,d,i;
	scanf("%d %d",&e,&d);
	for(i=0;i<=2;i++)
	{
		scanf("%d",&a[i]);
	}
	insert(a,e,d);
	
}
    void insert(int a[3],int e,int d)
   { int i;
   	
   	a[d-1]=e;
   	
   
   for(i=0;i<3;i++)
   {
   	printf("%d",a[i]);
   }
}
