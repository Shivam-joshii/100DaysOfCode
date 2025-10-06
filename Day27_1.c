/*
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main() {
    int i, j, n = 5; // n is the number of rows for the top half

    // upper part of the diamond
    for (i = 1; i <= n; i++) {
        // print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // lower part of the diamond
    for (i = n - 1; i >= 1; i--) {
        // print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
