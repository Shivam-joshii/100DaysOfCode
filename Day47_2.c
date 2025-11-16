//Find the longest word in a sentence.
#include <stdio.h>

void find_longest_word(char sentence[], char longest_word[]) {
    int max_len = 0;
    int current_len = 0;
    int start = 0, max_start = 0, i = 0;

    while (1) {
        if (sentence[i] != ' ' && sentence[i] != '\0') {
            current_len++;
        } else {
            if (current_len > max_len) {
                max_len = current_len;
                max_start = start;
            }
            current_len = 0;
            start = i + 1;
            if (sentence[i] == '\0') break;
        }
        i++;
    }

    // Copy the longest word into longest_word array
    for (i = 0; i < max_len; i++) {
        longest_word[i] = sentence[max_start + i];
    }
    longest_word[max_len] = '\0';  // Null-terminate the string
}

int main() {
    char sentence[] = "Find the longest word in this sentence";
    char longest_word[100];

    find_longest_word(sentence, longest_word);
    printf("Longest word: %s\n", longest_word);

    return 0;
}
