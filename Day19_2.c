// Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int num, sum = 0, temp, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; 
    while (temp > 0) {
        digit = temp % 10;  
        sum += digit;     
        temp /= 10;        
    }

   
    printf("Sum of digits of %d is: %d\n", num, sum);

    return 0;
}
