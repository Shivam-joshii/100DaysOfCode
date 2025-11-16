//Print initials of a name with the surname displayed in full
#include <stdio.h>

void print_initials_with_surname(char name[]) {
    int i = 0, start = 0, last_space = -1;

    // Find position of last space
    while (name[i] != '\0') {
        if (name[i] == ' ') {
            last_space = i;
        }
        i++;
    }

    // Print initials for all words except last
    i = 0;
    while (i < last_space) {
        if ((i == 0 && name[i] != ' ') || (name[i] == ' ' && name[i+1] != ' ' && i+1 < last_space)) {
            printf("%c. ", name[i == 0 ? i : i+1]);
        }
        i++;
    }

    // Print full surname (last word)
    if (last_space != -1) {
        printf("%s\n", &name[last_space + 1]);
    } else {
        // If single word name, print it as is
        printf("%s\n", name);
    }
}

int main() {
    char name[] = "John Ronald Reuel Tolkien";
    printf("Formatted name: ");
    print_initials_with_surname(name);
    return 0;
}
