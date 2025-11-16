//Toggle case of each character in a string
#include <stdio.h>

void toggle_case(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert lowercase to uppercase
            str[i] = str[i] - ('a' - 'A');
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            // Convert uppercase to lowercase
            str[i] = str[i] + ('a' - 'A');
        }
        i++;
    }
}

int main() {
    char myString[] = "Hello World";
    toggle_case(myString);
    printf("Toggled case string: %s\n", myString);
    return 0;
}
