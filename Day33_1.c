//search in a sorted array using binary search
#include <stdio.h>

int binarySearch(int arr[], int n, int x) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid;  // Element found at mid

        if (arr[mid] < x)
            low = mid + 1;  // Search in the right half
        else
            high = mid - 1;  // Search in the left half
    }

    return -1;  // Element not found
}

int main() {
    int n, x;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &x);

    int result = binarySearch(arr, n, x);
    if (result != -1)
        printf("Element %d found at index %d.\n", x, result);
    else
        printf("Element %d not found in the array.\n", x);

    return 0;
}
