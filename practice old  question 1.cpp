
#include<stdio.h>
int main()
{
	float sub1,sub2,sub3,total,percent;
	
	printf("Enter marks in three subjects: ");
	scanf("%f %f %f",&sub1,&sub2,&sub3);
	
	total=sub1+sub2+sub3;
	percent=(total/300)*100;
	
	if(percent>=80)
	{
		printf("Percent=%.2f\nDivision=Distinction",percent);
		
	}
	
	else if(percent>=60&&percent<80)
	{
		printf("Percent=%.2f\nDivision=First",percent);	
	}
	
	else if(percent>=40&&percent<60)
	{
	printf("Percent=%.2f\nDivision=Second",percent);	
	}
	return 0;
}

