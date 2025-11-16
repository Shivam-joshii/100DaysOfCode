//Print the initials of a name
#include <stdio.h>

void print_initials(char name[]) {
    int i = 0;
    // Print first character as initial if not space
    if (name[0] != ' ' && name[0] != '\0') {
        printf("%c", name[0]);
    }
    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c", name[i + 1]);
        }
        i++;
    }
    printf("\n");
}

int main() {
    char name[] = "John Ronald Reuel Tolkien";
    printf("Initials: ");
    print_initials(name);
    return 0;
}
