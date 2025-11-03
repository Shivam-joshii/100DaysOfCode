//Rotate an array to the right by k positions
#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateRight(int arr[], int n, int k) {
    k = k % n;  // Handle if k > n
    // Reverse entire array
    reverse(arr, 0, n - 1);
    // Reverse first k elements
    reverse(arr, 0, k - 1);
    // Reverse remaining n-k elements
    reverse(arr, k, n - 1);
}

int main() {
    int n, k;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate right by: ");
    scanf("%d", &k);

    rotateRight(arr, n, k);

    printf("Array after rotating right by %d positions:\n", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
