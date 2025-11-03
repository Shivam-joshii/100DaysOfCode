//Search for an element in an array using linear search

#include <stdio.h>

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;  // element found, return index
        }
    }
    return -1;  // element not found
}

int main() {
    int n, x, result;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search for: ");
    scanf("%d", &x);
    
    result = linearSearch(arr, n, x);
    
    if (result == -1) {
        printf("Element %d is not present in the array.\n", x);
    } else {
        printf("Element %d is present at index %d.\n", x, result);
    }
    
    return 0;
}
