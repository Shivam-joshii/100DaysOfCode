//Find the second largest element in an array
#include <stdio.h>
#include <limits.h>  // for INT_MIN

int findSecondLargest(int arr[], int n) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        // No second largest element found (all elements might be equal)
        return -1;
    }
    return secondLargest;
}

int main() {
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = findSecondLargest(arr, n);
    if (result == -1) {
        printf("No second largest element found.\n");
    } else {
        printf("The second largest element is %d\n", result);
    }

    return 0;
}
