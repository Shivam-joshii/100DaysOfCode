#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("info.txt", "a");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    
    char line[256];
    printf("Enter a line of text to append:\n");
    getchar(); // to consume newline left by previous input
    fgets(line, sizeof(line), stdin);
    
    fprintf(fp, "%s", line);
    fclose(fp);
    
    printf("Text appended successfully\n");
    return 0;
}
