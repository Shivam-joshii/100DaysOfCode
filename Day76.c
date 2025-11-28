#include <stdio.h>

int main() {
    char filename[100];
    scanf("%s", filename);
    
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist\n");
        return 1;
    }
    
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    
    fclose(fp);
    return 0;
}
