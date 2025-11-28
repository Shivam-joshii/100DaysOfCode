#include <stdio.h>

enum Status {SUCCESS = 10, FAILURE, TIMEOUT};

int main() {
    enum Status result = SUCCESS;  // Change to FAILURE or TIMEOUT to test other cases
    
    switch(result) {
        case SUCCESS:
            printf("SUCCESS = %d: Operation completed successfully\n", SUCCESS);
            break;
        case FAILURE:
            printf("FAILURE = %d: Operation failed\n", FAILURE);
            break;
        case TIMEOUT:
            printf("TIMEOUT = %d: Operation timed out\n", TIMEOUT);
            break;
        default:
            printf("Unknown status\n");
    }
    
    return 0;
}
