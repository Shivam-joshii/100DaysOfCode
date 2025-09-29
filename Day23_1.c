// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main()
 {
    int n;
    float sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        float term = (float)(2 * i) / (4 * i - 1);
        sum += term;
    }
    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
