#include<stdio.h>
main()
{ float t1,t2,t3,t4;
printf("Enter the temperature in Celsius and Fahreniet ");
scanf("%f %f",&t1,&t2);
t3=(9*t1/5)+32;
t4=((t2-32)/9)*5;
printf("After the conversion the temperature are %f %f ",t3,t4);
}
