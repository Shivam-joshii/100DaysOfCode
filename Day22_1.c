// Write a program to check if a number is a strong number.
#include <stdio.h>

int main() {
    int num, original, digit;
    int sum = 0, fact, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num > 0) {
        digit = num % 10;
        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }
    if (sum == original)
        printf("Strong number\n");
    else
        printf("Not strong number\n");

    return 0;
}
