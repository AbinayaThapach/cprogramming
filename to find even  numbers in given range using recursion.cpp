#include<stdio.h>

void even(int l, int u);

int main() {
    int l, u;
    scanf("%d %d", &l, &u);
    even(l, u);
    return 0;
}

void even(int l, int u) {
    if (l > u) {
        return;  // Base case: stop recursion when l exceeds u
    }
    
    // If l is odd, adjust l to the next even number
    if (l % 2 != 0) {
        l++;
    }

    // Print the even numbers within the range
    for (; l <= u; l += 2) {
        printf("%d ", l);
    }
}

