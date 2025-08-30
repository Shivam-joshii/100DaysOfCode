//Q8 Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("The sum of the first %d natural numbers is %d\n", n, sum);

    getchar();
    getchar();

    return 0;
}