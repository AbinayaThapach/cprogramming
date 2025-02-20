
#include<stdio.h>
int main()
{
	FILE *fptr;
	char ch;
	int count=0;
	fptr=fopen("filec.txt","r");
	
	while(ch!=EOF)
	{
			ch=fgetc(fptr);
			putchar(ch);
		if(ch!=' ')
		{
			count++;
		}
	
	}
	fclose(fptr);
	printf("The number of characters is %d",count);
	return 0;
}

