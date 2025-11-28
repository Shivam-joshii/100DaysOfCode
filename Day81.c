#include <stdio.h>

int main() {
    enum Days {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
    
    for (int day = SUNDAY; day <= SATURDAY; day++) {
        switch(day) {
            case SUNDAY: printf("SUNDAY = %d\n", day); break;
            case MONDAY: printf("MONDAY = %d\n", day); break;
            case TUESDAY: printf("TUESDAY = %d\n", day); break;
            case WEDNESDAY: printf("WEDNESDAY = %d\n", day); break;
            case THURSDAY: printf("THURSDAY = %d\n", day); break;
            case FRIDAY: printf("FRIDAY = %d\n", day); break;
            case SATURDAY: printf("SATURDAY = %d\n", day); break;
        }
    }
    
    return 0;
}
