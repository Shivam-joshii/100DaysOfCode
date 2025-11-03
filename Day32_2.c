//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    int num, temp, digit;
    int freq[10] = {0};  // Array to store frequency of digits 0-9
    int maxCount = 0, maxDigit = 0;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    temp = num;
    if (temp < 0) {
        temp = -temp;  // Handle negative numbers
    }

    // Count frequency of each digit
    while (temp > 0) {
        digit = temp % 10;
        freq[digit]++;
        temp /= 10;
    }

    // Find the digit with the highest frequency
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxDigit = i;
        } else if (freq[i] == maxCount && i > maxDigit) {
            // If two digits have same frequency, choose the larger digit
            maxDigit = i;
        }
    }

    printf("The digit that occurs most is: %d, occurring %d times.\n", maxDigit, maxCount);

    return 0;
}
