
#include <stdio.h>

int main() {
    char chars[] = {'N', 'e', 'P', 'a', 'L'};
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        for (int j = 0; j < (2 * i + 1); j++) {
            printf("%c", chars[i]);
        }

        printf("\n");
    }

    return 0;
}

