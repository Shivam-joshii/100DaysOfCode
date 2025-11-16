//Check if a string is a palindrome
#include <stdio.h>

int is_palindrome(char str[]) {
    int start = 0;
    int end = 0;
    
    // Find the end index of the string
    while (str[end] != '\0') {
        end++;
    }
    end--;  // Last valid character index
    
    // Compare characters from both ends
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;  // Not a palindrome
        }
        start++;
        end--;
    }
    return 1;  // Is a palindrome
}

int main() {
    char myString[] = "radar";
    if (is_palindrome(myString)) {
        printf("%s is a palindrome\n", myString);
    } else {
        printf("%s is not a palindrome\n", myString);
    }
    return 0;
}
