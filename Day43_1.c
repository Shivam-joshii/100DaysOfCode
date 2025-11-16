//Reverse a string
#include <stdio.h>

void reverse_string(char str[]) {
    int start = 0;
    int end = 0;
    
    // Find the end index (length - 1)
    while (str[end] != '\0') {
        end++;
    }
    end--;  // Move to the last character index
    
    // Swap characters from start to end until they meet
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char myString[] = "Hello World";
    reverse_string(myString);
    printf("Reversed string: %s\n", myString);
    return 0;
}
