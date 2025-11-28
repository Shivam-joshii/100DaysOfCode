#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int total_sum = n * (n + 1) / 2;

    int sum_left = 0;
    for (int x = 1; x <= n; x++) {
        sum_left += x;
        int sum_right = total_sum - (sum_left - x);
        if (sum_left == sum_right) {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
