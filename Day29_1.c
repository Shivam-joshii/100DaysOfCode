// sum of array elements 

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // array declaration

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // input elements
        sum += arr[i];         // add each element to sum
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}
