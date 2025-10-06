// Write a program to read and print elements of one-dimentional array.

#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50}; 
    int i;

    printf("The elements of the array are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
