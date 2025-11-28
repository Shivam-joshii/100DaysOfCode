#include <stdio.h>

enum UserRole {ADMIN = 1, USER, GUEST};

int main() {
    int role;
    
    printf("Enter user role (1-ADMIN, 2-USER, 3-GUEST): ");
    scanf("%d", &role);
    
    enum UserRole currentRole = (enum UserRole)role;
    
    switch(currentRole) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome User! You have standard access.\n");
            break;
        case GUEST:
            printf("Welcome Guest! Limited access only.\n");
            break;
        default:
            printf("Invalid role!\n");
    }
    
    return 0;
}
