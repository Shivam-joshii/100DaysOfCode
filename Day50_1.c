//change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

// Function to replace "/04/" with "-Apr-"
void change_date_format(char date[]) {
    int i = 0, j = 0;
    char result[20];  // Buffer for new formatted date

    while (date[i] != '\0') {
        if (date[i] == '/' && date[i+1] == '0' && date[i+2] == '4' && date[i+3] == '/') {
            // Replace "/04/" with "-Apr-"
            result[j++] = '-';
            result[j++] = 'A';
            result[j++] = 'p';
            result[j++] = 'r';
            result[j++] = '-';
            i += 4;  // Skip "/04/"
        } else {
            result[j++] = date[i++];
        }
    }
    result[j] = '\0';

    // Copy back to the original string
    i = 0;
    while (result[i] != '\0') {
        date[i] = result[i];
        i++;
    }
    date[i] = '\0';
}

int main() {
    char date[] = "20/04/2023";
    change_date_format(date);
    printf("Formatted date: %s\n", date);  // Output: 20-Apr-2023
    return 0;
}
