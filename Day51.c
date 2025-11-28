#include <stdio.h>

void findFirstAndLast(int nums[], int n, int target, int *first, int *last) {
    *first = -1;
    *last = -1;
    
    for(int i = 0; i < n; i++) {
        if(nums[i] == target) {
            if(*first == -1) {
                *first = i;
            }
            *last = i;
        }
    }
}

int main() {
    int n, target;
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    printf("Enter sorted array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    printf("Enter target: ");
    scanf("%d", &target);
    
    int first, last;
    findFirstAndLast(nums, n, target, &first, &last);
    
    printf("%d,%d\n", first, last);
    
    return 0;
}
