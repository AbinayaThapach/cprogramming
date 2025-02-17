#include<stdio.h>
void des(char []);
main()
{
	char s[5];
	scanf("%s",s);
	des(s);
}
void des(char s[])
{
	int i,j;
	char temp;
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if (s[i]<s[j])
		{
				temp=s[i];
			s[i]=s[j];
			s[j]=temp;}
		}
	}
	printf("%s",s);
}
