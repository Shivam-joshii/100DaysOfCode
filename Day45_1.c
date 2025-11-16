//Count frequency of a given character in a string.
#include <stdio.h>

int count_char_frequency(char str[], char target) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == target) {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    char myString[] = "hello world";
    char target = 'l';
    int frequency = count_char_frequency(myString, target);
    printf("Frequency of '%c': %d\n", target, frequency);
    return 0;
}

