//Replace spaces with hyphens in a string.
#include <stdio.h>

void replace_spaces_with_hyphens(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = '-'; // Replace space with hyphen
        }
        i++;
    }
}

int main() {
    char myString[] = "Replace spaces with hyphens";
    replace_spaces_with_hyphens(myString);
    printf("Modified string: %s\n", myString);
    return 0;
}

