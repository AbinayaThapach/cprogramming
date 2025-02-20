
// C program to read a grade of student and print equivalent description

#include <stdio.h>

int main()
{
    char grade = 0;

    printf("Enter Grade: ");
    scanf("%c", &grade);

    switch (grade) {
    case 'a':
    case 'A':
        printf("Excellent");
        break;

    case 'b':
    case 'B':
        printf("Very Good");
        break;

    case 'c':
    case 'C':
        printf("Good");
        break;

    case 'y':
    case 'Y':
        printf("You are absent");
        break;

    case 'f':
    case 'F':
        printf("You are failed");
        break;

    default:
        printf("Invalid grade");
        break;
    }

    return 0;
}

