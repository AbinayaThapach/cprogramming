
//C program which display numbers from 1 to 10 and terminate the program if the number is 7
#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<11;i++)
	{
			if(i==7)
		{
			break;
		}
		printf("%d\t",i);
	
	}
	return 0;
}

