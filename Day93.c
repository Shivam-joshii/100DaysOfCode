#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    struct Student top_student;
    float max_marks = -1;
    
    for(int i = 0; i < 5; i++) {
        printf("Enter name, roll number, and marks for student %d: ", i+1);
        scanf("%s %d %f", students[i].name, &students[i].roll_no, &students[i].marks);
        
        if(students[i].marks > max_marks) {
            max_marks = students[i].marks;
            top_student = students[i];
        }
    }
    
    printf("\nTop Student:\n");
    printf("Name: %s\n", top_student.name);
    printf("Roll No: %d\n", top_student.roll_no);
    printf("Marks: %.2f\n", top_student.marks);
    
    return 0;
}
