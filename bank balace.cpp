#include<stdio.h>
#include<conio.h>
main()
{float bal;
char sex;
printf("old balance and gender");
scanf("%f %c",& bal,&sex);
if (sex=='f')
{
	if(bal>5000)
	bal=bal+0.05*bal;
else
bal=bal+0.02*bal;
}
else
bal=bal+0.02*bal;
printf("the balance is %f",bal);
getch();
}
