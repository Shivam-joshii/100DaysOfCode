// Write a program to find LCM of two numbers.

#include <stdio.h>
int main() {
    int a, b, i, max, lcm;
    printf(" Enter a number:");
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;
    for (i = max; ; i++) {
        if (i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
    }
    printf("%d", lcm);

    return 0;
}
