#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int candidate = nums[0];
    int count = 1;
    for(int i = 1; i < n; i++) {
        if(count == 0) {
            candidate = nums[i];
            count = 1;
        } else if(nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    
    int actual_count = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] == candidate) {
            actual_count++;
        }
    }
    
    if(actual_count > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }
    
    return 0;
}
