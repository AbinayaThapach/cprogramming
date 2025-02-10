#include<stdio.h>
#include<string.h> // for strcmp and strcpy

// Define the student structure
struct student {
    char add[50], name[40];
    int id;
} s[3];

// Function to sort students based on their name
void sort(struct student s[]) {
    struct student temp;
    int i, j;
    for(i = 0; i < 3-1; i++) {
        for(j = i+1; j < 3; j++) {
            // Compare names of students using strcmp
            if(strcmp(s[i].name, s[j].name) > 0) {
                // Swap the entire struct if the order is incorrect
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

int main() {
    int i;

    // Input for 2 students
    for(i = 0; i < 3; i++) {
        printf("Enter address, name, and ID for student %d: ", i+1);
        scanf("%s %s %d", s[i].add, s[i].name, &s[i].id);
    }
    
    // Sort the array of students
    sort(s);

    // Output the sorted student information
    printf("\nSorted Student Information:\n");
    for(i = 0; i < 3; i++) {
        printf("Address: %s, Name: %s, ID: %d\n", s[i].add, s[i].name, s[i].id);
    }

    return 0;
}

