
#include <stdio.h>

int main() {
    FILE *fptr;
    char str[40];
    int i;
    
    // Open file for reading and writing (w+ will overwrite existing content)
    fptr = fopen("string.txt", "w+");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    
    printf("Enter three strings:\n");

    // Get three strings and write them to the file
    for (i = 0; i < 3; i++) {
        fgets(str, sizeof(str), stdin); // safer alternative to gets()
        fputs(str, fptr);
        fprintf(fptr, "\n");
    }
    
    // Move file pointer to the beginning for reading
    rewind(fptr);
    printf("The strings stored in file are: \n");

    // Read and print the strings from the file
    while (fgets(str, sizeof(str), fptr)) {
        printf("%s", str); // No need for extra newline
    }
    
    // Close the file after operations
    fclose(fptr);

    return 0;
}


