#include <stdio.h>

struct Employee {
    char name[50];
    int emp_id;
    int day, month, year;
};

int main() {
    struct Employee emp;
    
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Enter employee ID: ");
    scanf("%d", &emp.emp_id);
    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &emp.day, &emp.month, &emp.year);
    
    FILE *fp = fopen("employee.bin", "wb");
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);
    
    printf("\nData written to file.\n");
    
    FILE *read_fp = fopen("employee.bin", "rb");
    struct Employee read_emp;
    fread(&read_emp, sizeof(struct Employee), 1, read_fp);
    fclose(read_fp);
    
    printf("\nRead Employee Details:\n");
    printf("Name: %s\n", read_emp.name);
    printf("Employee ID: %d\n", read_emp.emp_id);
    printf("Joining Date: %02d/%02d/%d\n", 
           read_emp.day, read_emp.month, read_emp.year);
    
    return 0;
}
