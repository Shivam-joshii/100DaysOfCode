#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < n; i++) {
        int found = 0;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }
        if(found == 0) {
            printf("-1");
        }
        if(i < n - 1) {
            printf(",");
        }
    }
    printf("\n");
    return 0;
}
