#include <stdio.h>

int main() {
    int n = 5; // Number of rows for half the diamond (center row is n)
    int i, j;

    // Upper part of diamond
    for(i = 1; i <= n; i++) {
        for(j = i; j < n; j++)
            printf("  "); // Print spaces
        for(j = 1; j <= (2*i-1); j++)
            printf("X ");
        printf("\n");
    }

    // Lower part of diamond
    for(i = n-1; i >= 1; i--) {
        for(j = n; j > i; j--)
            printf("  "); // Print spaces
        for(j = 1; j <= (2*i-1); j++)
            printf("X ");
        printf("\n");
    }

    return 0;
}
