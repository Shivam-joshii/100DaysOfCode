#include <stdio.h>

enum Status {SUCCESS = 10, FAILURE, TIMEOUT};

int main() {
    char *status_names[] = {"SUCCESS", "FAILURE", "TIMEOUT"};
    
    printf("Enum Values:\n");
    for(int i = SUCCESS; i <= TIMEOUT; i++) {
        printf("%s = %d\n", status_names[i - SUCCESS], i);
    }
    
    return 0;
}
