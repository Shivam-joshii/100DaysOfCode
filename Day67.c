#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int arr1[m], arr2[n];
    
    for(int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    
    int merged[m + n];
    int i = 0, j = 0, k = 0;
    
    while(i < m && j < n) {
        if(arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    
    while(i < m) {
        merged[k++] = arr1[i++];
    }
    while(j < n) {
        merged[k++] = arr2[j++];
    }
    
    for(int p = 0; p < m + n; p++) {
        printf("%d", merged[p]);
        if(p < m + n - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
