
//C program to print all punctuation marks using the ispunct() function
#include <stdio.h>
#include <ctype.h>
int main()
{
    int i;
    printf("Punctuation marks\n");
    for (i = 0; i <= 255; i++)
    {
        if (ispunct(i))
        {
            printf("%c\n", i);
        }
    }
    return 0;
}

