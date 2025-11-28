#include <stdio.h>

enum Example {A = 5, B, C = 10, D};

int main() {
    printf("A = %d\n", A); // Prints 5
    printf("B = %d\n", B); // Prints 6 (auto-incremented from A)
    printf("C = %d\n", C); // Prints 10 (explicitly assigned)
    printf("D = %d\n", D); // Prints 11 (auto-incremented from C)
    
    return 0;
}
