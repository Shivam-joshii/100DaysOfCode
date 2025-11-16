//Find the first repeating lowercase alphabet in a string
#include <stdio.h>

char first_repeating_lowercase(char str[]) {
    int freq[26] = {0};  // Frequency array for 'a' to 'z'
    int i = 0;

    while (str[i] != '\0') {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) {
                return ch;  // First repeating lowercase character
            }
        }
        i++;
    }
    return '\0';  // No repeating lowercase character found
}

int main() {
    char myString[] = "computer programming";
    char result = first_repeating_lowercase(myString);
    if (result != '\0') {
        printf("First repeating lowercase alphabet: %c\n", result);
    } else {
        printf("No repeating lowercase alphabet found\n");
    }
    return 0;
}
