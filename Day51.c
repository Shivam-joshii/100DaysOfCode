#include <stdio.h>

void findFirstLast(int nums[], int size, int target, int *first, int *last) {
    *first = -1;
    *last = -1;

    for (int i = 0; i < size; i++) {
        if (nums[i] == target) {
            *first = i;
            break;
        }
    }

    if (*first == -1) {
        return;
    }

    for (int j = size - 1; j >= 0; j--) {
        if (nums[j] == target) {
            *last = j;
            break;
        }
    }
}

int main() {
    int nums1[] = {5,7,7,8,8,10};
    int size = sizeof(nums1) / sizeof(nums1[0]);
    int target = 8;

    int first, last;
    findFirstLast(nums1, size, target, &first, &last);
    printf("%d,%d\n", first, last);

    target = 6;
    findFirstLast(nums1, size, target, &first, &last);
    printf("%d,%d\n", first, last);

    target = 10;
    findFirstLast(nums1, size, target, &first, &last);
    printf("%d,%d\n", first, last);

    return 0;
}
