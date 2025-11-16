//Reverse each word in a sentence without changing the word order.
#include <stdio.h>

// Function to reverse a portion of the string from start to end indices
void reverse_word(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Function to reverse each word in the sentence
void reverse_each_word(char sentence[]) {
    int start = 0, i = 0;
    while (1) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            reverse_word(sentence, start, i - 1);
            if (sentence[i] == '\0')
                break;
            start = i + 1;
        }
        i++;
    }
}

int main() {
    char sentence[] = "Reverse each word in this sentence";
    reverse_each_word(sentence);
    printf("Modified sentence: %s\n", sentence);
    return 0;
}
