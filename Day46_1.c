//Remove all vowels from a string

#include <stdio.h>

int is_vowel(char ch) {
    // Check for vowels (both lowercase and uppercase)
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        return 1;
    }
    return 0;
}

void remove_vowels(char str[]) {
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (!is_vowel(str[i])) {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';  // Null-terminate the modified string
}

int main() {
    char myString[] = "Hello World";
    remove_vowels(myString);
    printf("String without vowels: %s\n", myString);
    return 0;
}
