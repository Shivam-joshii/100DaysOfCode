//Write a program to print all the prime numbers from 1 to n using nested loop.


#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    // Input the upper limit
    scanf("%d", &n);

    // Iterate over each number from 2 to n
    for(i = 2; i <= n; i++) {
        isPrime = 1; // Assume i is prime

        // Check divisibility
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }

        // If prime, print it
        if(isPrime) {
            printf("%d ", i);
        }
    }

    return 0;
}
