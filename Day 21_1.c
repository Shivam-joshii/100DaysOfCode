//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() 
{
    int num, first, last, digits, powTen, middle, result;
    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;
    digits = (int)log10(num);
    powTen = (int)pow(10, digits);

    first = num / powTen;
    middle = num % powTen;
    middle = middle / 10;
    result = last * powTen + middle * 10 + first;

    printf("%d\n", result);

    return 0;
}
