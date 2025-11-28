#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int emp_id;
    struct Date joining_date;
};

int main() {
    struct Employee emp;
    
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    
    printf("Enter employee ID: ");
    scanf("%d", &emp.emp_id);
    
    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &emp.joining_date.day, 
          &emp.joining_date.month, 
          &emp.joining_date.year);
    
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.emp_id);
    printf("Joining Date: %02d/%02d/%d\n", 
           emp.joining_date.day, 
           emp.joining_date.month, 
           emp.joining_date.year);
    
    return 0;
}
