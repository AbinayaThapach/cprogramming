
//C program to read name and marital status of a girl and print her name with Miss or Mrs
#include<stdio.h>
int main()
{
    char name[50], marital_status;
    printf("Enter name:");
    scanf("%s", name);
    printf("Enter marital status (M for Married, U for Unmarried): ");
    scanf(" %c", &marital_status);
    if(marital_status == 'M')
    {
        printf("Mrs. %s\n", name);
    }
    else
    {
        printf("Miss %s\n", name);
    }
    return 0;
}

