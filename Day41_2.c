//Print each character of a string on a new line

#include <stdio.h>

void print_chars_newline(char str[]) {
    int i = 0;
    while (str[i] != '\0') {  // Loop until null-terminator
        printf("%c\n", str[i]);
        i++;
    }
}

int main() {
    char myString[] = "Hello";
    print_chars_newline(myString);
    return 0;
}
