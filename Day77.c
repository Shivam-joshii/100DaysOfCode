#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    
    if (input == NULL || output == NULL) {
        printf("Error opening files\n");
        return 1;
    }
    
    char ch;
    while ((ch = fgetc(input)) != EOF) {
        fputc(toupper(ch), output);
    }
    
    fclose(input);
    fclose(output);
    return 0;
}
