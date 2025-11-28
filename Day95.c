#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTopStudent(struct Student students[], int n) {
    struct Student top = students[0];
    for(int i = 1; i < n; i++) {
        if(students[i].marks > top.marks) {
            top = students[i];
        }
    }
    return top;
}

int main() {
    struct Student students[5], topStudent;
    
    for(int i = 0; i < 5; i++) {
        printf("Enter name, roll number, and marks for student %d: ", i+1);
        scanf("%s %d %f", students[i].name, &students[i].roll_no, &students[i].marks);
    }
    
    topStudent = findTopStudent(students, 5);
    
    printf("\nTop Student Details:\n");
    printf("Name: %s\n", topStudent.name);
    printf("Roll No: %d\n", topStudent.roll_no);
    printf("Marks: %.2f\n", topStudent.marks);
    
    return 0;
}
