//Count characters in a string without using built-in length functions.

#include <stdio.h>

int string_length(char str[]) {
    int count = 0;
    while (str[count] != '\0') {  // Continue until null character
        count++;
    }
    return count;
}

int main() {
    char myString[] = "Hello, World!";
    int length = string_length(myString);
    printf("Length of the string: %d\n", length);
    return 0;
}
