#include <stdio.h>
#include <string.h>

int main() {
    char s[1001], t[1001];
    scanf("%s %s", s, t);

    int count_s[26] = {0};
    int count_t[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        count_s[s[i] - 'a']++;
    }
    for (int i = 0; t[i] != '\0'; i++) {
        count_t[t[i] - 'a']++;
    }

    int is_anagram = 1;
    for (int i = 0; i < 26; i++) {
        if (count_s[i] != count_t[i]) {
            is_anagram = 0;
            break;
        }
    }

    if (is_anagram) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}
