//Count spaces, digits, and special characters in a string
#include <stdio.h>

void count_spaces_digits_special(char str[], int *spaces, int *digits, int *specials) {
    *spaces = 0;
    *digits = 0;
    *specials = 0;
    int i = 0;

    while (str[i] != '\0') {
        char ch = str[i];
        
        if (ch == ' ') {
            (*spaces)++;
        } else if (ch >= '0' && ch <= '9') {
            (*digits)++;
        } else if ((ch < '0' || (ch > '9' && ch < 'A')) || 
                   (ch > 'Z' && ch < 'a') || (ch > 'z')) {
            // Not a digit or letter - treated as special character
            (*specials)++;
        }
        i++;
    }
}

int main() {
    char myString[] = "Hello world! 1234 @#";
    int spaces, digits, specials;
    count_spaces_digits_special(myString, &spaces, &digits, &specials);
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specials);
    return 0;
}
