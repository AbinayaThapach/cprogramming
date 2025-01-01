#include<stdio.h>
main()
{ int p,t,r;
float si;
printf("Enter the principal ,time and rate");
scanf("%d %d %d",&p,&t,&r);
si=(p*t*r)/100;
printf("%f is simple interest",si);

}
