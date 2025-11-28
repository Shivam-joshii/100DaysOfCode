#include <stdio.h>

enum Status {SUCCESS = 0, FAILURE, TIMEOUT};

int main() {
    enum Status result = SUCCESS;  // Change to FAILURE or TIMEOUT to test other cases
    
    switch(result) {
        case SUCCESS:
            printf("Operation completed successfully\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Unknown status\n");
    }
    
    return 0;
}
