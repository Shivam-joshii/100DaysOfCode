//Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>

void to_uppercase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  // Convert to uppercase
        }
        i++;
    }
}

int main() {
    char myString[] = "hello world";
    to_uppercase(myString);
    printf("Uppercase string: %s\n", myString);
    return 0;
}
