//Insert an element in an array at a given position
#include <stdio.h>

int main() {
    int arr[100], n, pos, val, i;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert element (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position! Please enter position between 1 and %d\n", n + 1);
        return 1;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &val);

    // Shift elements to the right from position
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = val;  // Insert element at position
    n++;  // Increment size of array

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
