#include<stdio.h>
#include<conio.h>
main()
{
	char c;
	printf("Enter the charaaacter");
	scanf("%c",&c);
	if(c>=65&&c<=90)
	{
		printf("the character is in uppercase");
		c+=32;
		printf("the character in lowercase is %c",c);
		
	}
	else if (c<=122&& c>=90)
{
	printf("the character  is in lowertcase");
	c-=32;
	printf("the character in uppercaswe is %c",c);
	
}
}
