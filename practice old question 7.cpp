
#include <stdio.h>

int determinant(int A[2][2]) {
    return A[0][0] * A[1][1] - A[0][1] * A[1][0];
}

int main() {
    int A[2][2];

    printf("Enter elements of 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Determinant of the matrix: %d\n", determinant(A));

    return 0;
}

