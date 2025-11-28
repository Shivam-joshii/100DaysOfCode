#include <stdio.h>

enum Gender {MALE, FEMALE, OTHER};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person person;
    
    printf("Enter name: ");
    scanf("%s", person.name);
    
    int g;
    printf("Enter gender (0-MALE, 1-FEMALE, 2-OTHER): ");
    scanf("%d", &g);
    person.gender = (enum Gender)g;
    
    printf("Name: %s\n", person.name);
    printf("Gender: ");
    switch(person.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Invalid\n");
    }
    
    return 0;
}

