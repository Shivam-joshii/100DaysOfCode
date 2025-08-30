//Q6 Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main() {
    int num1, num2, swap_num;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    swap_num = num1;
    num1 = num2;
    num2 = swap_num;

    printf("After swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    getchar();
    getchar();

    return 0;
}