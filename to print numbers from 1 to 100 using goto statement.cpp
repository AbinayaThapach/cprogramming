#include<stdio.h>
int main() {
    int num = 1;
    
n1:
    printf("%d", num++);
    if (num > 100)
        goto n2;  // Jump to n2 when num exceeds 100
    else
        goto n1;  // Go back to n1 to continue the loop

n2:  // Label where we end the program
    return 0;
}

