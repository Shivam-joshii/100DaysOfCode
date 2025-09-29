//write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
#include <string.h>

int main()
 {
    char binary[100];
    int i;
    printf("Enter a binary number: ");
    scanf("%s", binary);

    printf("1's Complement: ");
    for (i = 0; i < strlen(binary); i++) {
        if (binary[i] == '1')
            printf("0");
        else if (binary[i] == '0')
            printf("1");
        else {
            printf("\nInvalid input! Only 0 and 1 allowed.\n");
            return 0;
        }
    }
    printf("\n");

    return 0;
}
