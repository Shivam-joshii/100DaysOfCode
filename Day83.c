#include <stdio.h>

enum Month {JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, 
            JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};

int main() {
    char *month_names[] = {"JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE",
                           "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};
    
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    printf("Month\t\tDays\n");
    printf("--------------------\n");
    
    for(int i = JANUARY; i <= DECEMBER; i++) {
        printf("%s\t%d\n", month_names[i], days[i]);
    }
    
    return 0;
}
