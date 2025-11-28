#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    scanf("%s", s);
    
    int n = strlen(s);
    int max_len = 0;
    
    for(int i = 0; i < n; i++) {
        int visited[256] = {0};
        int len = 0;
        for(int j = i; j < n; j++) {
            if(visited[(unsigned char)s[j]]) {
                break;
            }
            visited[(unsigned char)s[j]] = 1;
            len++;
        }
        if(len > max_len) {
            max_len = len;
        }
    }
    
    printf("%d\n", max_len);
    return 0;
}
