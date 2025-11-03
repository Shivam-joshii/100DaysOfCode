//Insert an element in a sorted array at the appropriate position
#include <stdio.h>

int insertSorted(int arr[], int n, int key, int capacity) {
    if (n >= capacity) {
        // Array is full, cannot insert
        return n;
    }

    int i;
    // Find the position to insert the key
    for (i = n - 1; (i >= 0 && arr[i] > key); i--) {
        arr[i + 1] = arr[i];  // Shift elements to the right
    }
    arr[i + 1] = key;  // Insert the key

    return n + 1;  // New size of the array
}

int main() {
    int arr[20] = {12, 16, 20, 40, 50, 70};
    int n = 6;
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter element to insert
