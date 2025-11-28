#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("info.txt", "r");
    
    char line[256];
    
    if (fp == NULL) {
        printf("File not found\n");
        return 1;
    }
    
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }
    
    fclose(fp);
    return 0;
}
