#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;
    
    printf("Enter name: ");
    scanf("%s", s.name);
    
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
    
    return 0;
}
