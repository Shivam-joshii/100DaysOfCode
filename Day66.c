#include <stdio.h>

int main() {
    int n, target;
    scanf("%d %d", &n, &target);
    int nums[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }
    
    printf("-1 -1\n");
    return 0;
}
