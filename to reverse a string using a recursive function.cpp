#include<stdio.h>
void reverse(char[],int);
main()
{
	int count=0,i;
	char st[50];
	scanf("%s",st);
	for(i=0;st[i]!='\0';i++)
	++count;
	reverse(st,count);
	printf("the reverse string is %s",st);
}
void reverse(char m1[],int count1)
{
	char temp;
	static int i=0;
	if(i<=count1)
	{
		temp=m1[i];
		m1[i]=m1[count1-1];
		m1[count1-1]=temp;
		i++;
		reverse(m1,--count1);
		
	}
}

