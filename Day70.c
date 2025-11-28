#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1001];
    fgets(str, sizeof(str), stdin);
    
    int i = 0;
    while (str[i] != '\0') {
        if (i == 0 && isalpha(str[i])) {
            str[i] = toupper(str[i]);
        } else if (str[i-1] == '.' && str[i] == ' ' && isalpha(str[i+1])) {
            str[i+1] = toupper(str[i+1]);
            i++;
        } else {
            str[i] = tolower(str[i]);
        }
        i++;
    }
    
    printf("%s", str);
    return 0;
}
