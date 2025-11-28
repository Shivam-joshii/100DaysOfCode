#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("info.txt", "r");
    
    if (fp == NULL) {
        printf("File not found\n");
        return 1;
    }
    
    int chars = 0, words = 0, lines = 0;
    int in_word = 0;
    char ch;
    
    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') {
            lines++;
        }
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            if (in_word) {
                words++;
                in_word = 0;
            }
        } else {
            in_word = 1;
        }
    }
    
    if (in_word) {
        words++;
    }
    
    fclose(fp);
    
    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    
    return 0;
}

