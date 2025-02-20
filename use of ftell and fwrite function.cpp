
#include<stdio.h>
int main()
{
	FILE *fptr;
	
	fptr=fopen("filec.txt","w");
	printf("Position of pointer initially: %d\n",ftell(fptr));
	fprintf(fptr,"Hello everyone");
	printf("Position of pointer after writing: %d\n",ftell(fptr));
	rewind(fptr);
	printf("Position of pointer after rewind: %d\n",ftell(fptr));
}

