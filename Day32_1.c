//merge two array 
#include <stdio.h>
#include <stdlib.h>

int* mergeArrays(int arr1[], int n1, int arr2[], int n2) {
    int* merged = (int*)malloc((n1 + n2) * sizeof(int));
    // Copy elements of first array
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    // Copy elements of second array
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }
    return merged;
}

int main() {
    int n1, n2;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int* mergedArray = mergeArrays(arr1, n1, arr2, n2);

    printf("Merged array:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    free(mergedArray);
    return 0;
}
