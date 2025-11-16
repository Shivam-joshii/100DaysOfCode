//Count vowels and consonants in a string.
#include <stdio.h>
#include <ctype.h>  // For tolower()

void count_vowels_consonants(char str[], int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;
    int i = 0;
    while (str[i] != '\0') {
        char ch = tolower(str[i]);
        if ((ch >= 'a' && ch <= 'z')) { // Check if alphabet
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
        i++;
    }
}

int main() {
    char myString[] = "Hello World!";
    int vowels, consonants;
    count_vowels_consonants(myString, &vowels, &consonants);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}
