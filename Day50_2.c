//Print all sub-strings of a string
#include <stdio.h>

void print_substrings(char str[]) {
    int i, j, k;
    for (i = 0; str[i] != '\0'; i++) {
        for (j = i; str[j] != '\0'; j++) {
            // Print substring from i to j
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
}

int main() {
    char str[] = "ABC";
    printf("All substrings:\n");
    print_substrings(str);
    return 0;
}
