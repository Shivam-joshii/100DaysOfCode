#include <stdio.h>

int main() {
    char source[100], dest[100];
    scanf("%s %s", source, dest);
    
    FILE *src = fopen(source, "r");
    FILE *dst = fopen(dest, "w");
    
    if (src == NULL || dst == NULL) {
        printf("Error opening files\n");
        return 1;
    }
    
    char ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dst);
    }
    
    fclose(src);
    fclose(dst);
    
    return 0;
}
