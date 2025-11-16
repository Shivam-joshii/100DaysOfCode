//Check if one string is a rotation of another
#include <stdio.h>

// Function to get length of string without built-in functions
int string_length(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to check if str2 is substring of str1
int is_substring(char str1[], char str2[]) {
    int len1 = string_length(str1);
    int len2 = string_length(str2);

    if (len2 > len1) return 0;

    for (int i = 0; i <= len1 - len2; i++) {
        int j = 0;
        while (j < len2 && str1[i + j] == str2[j]) {
            j++;
        }
        if (j == len2) return 1;  // Found substring
    }
    return 0;
}

// Check if str2 is rotation of str1
int is_rotation(char str1[], char str2[]) {
    int len1 = string_length(str1);
    int len2 = string_length(str2);

    if (len1 != len2) return 0;

    // Create concatenated string str1 + str1
    char concat[200];  // Assuming max length of str1 here
    for (int i = 0; i < len1; i++) {
        concat[i] = str1[i];
    }
    for (int i = 0; i < len1; i++) {
        concat[len1 + i] = str1[i];
    }
    concat[len1 * 2] = '\0';

    // Check if str2 is substring of concatenated string
    return is_substring(concat, str2);
}

int main() {
    char str1[] = "rotation";
    char str2[] = "tationro";

    if (is_rotation(str1, str2)) {
        printf("%s is a rotation of %s\n", str2, str1);
    } else {
        printf("%s is not a rotation of %s\n", str2, str1);
    }
    return 0;
}
