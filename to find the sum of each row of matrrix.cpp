
//C Program to find Sum of all elements of each row of a matrix
#include <stdio.h>
int main()
{
    int arr[100][100], r, c, i, j, sum;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);
    printf("Enter the elements of the matrix: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        sum = 0;
        for (j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
        printf("The sum of elements of row %d is: %d\n", i + 1, sum);
    }
    return 0;
}

