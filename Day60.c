#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i <= n - k; i++) {
        int max_val = arr[i];
        for(int j = i; j < i + k; j++) {
            if(arr[j] > max_val) {
                max_val = arr[j];
            }
        }
        printf("%d", max_val);
        if(i < n - k) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
