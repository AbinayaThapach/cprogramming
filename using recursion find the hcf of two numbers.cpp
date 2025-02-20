
#include <stdio.h>

// Function to find HCF using recursion
int hcf(int a, int b) {
    // Base case: when one number becomes 0, the other number is the HCF
    if (b == 0)
        return a;
    // Recursively call the function with b and a % b
    return hcf(b, a % b);
}

int main() {
    int num1, num2;
    
    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Call the hcf function and display the result
    printf("HCF of %d and %d is: %d\n", num1, num2, hcf(num1, num2));
    
    return 0;
}

