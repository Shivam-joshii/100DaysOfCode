//Check if two strings are anagrams of each other
#include <stdio.h>

int are_anagrams(char str1[], char str2[]) {
    int freq[26] = {0};  // Assuming only lowercase alphabets

    int i = 0;
    // Count frequency of characters in str1
    while (str1[i] != '\0') {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            freq[str1[i] - 'a']++;
        }
        i++;
    }

    i = 0;
    // Subtract frequency based on characters in str2
    while (str2[i] != '\0') {
        if (str2[i] >= 'a' && str2[i] <= 'z') {
            freq[str2[i] - 'a']--;
        }
        i++;
    }

    // Check if all frequencies are zero
    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return 0;  // Not anagrams
        }
    }
    return 1;  // Anagrams
}

int main() {
    char string1[] = "listen";
    char string2[] = "silent";

    if (are_anagrams(string1, string2)) {
        printf("The strings are anagrams\n");
    } else {
        printf("The strings are not anagrams\n");
    }
    return 0;
}
