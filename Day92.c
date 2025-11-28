#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    
    for(int i = 0; i < 5; i++) {
        printf("Enter name, roll number, and marks for student %d: ", i+1);
        scanf("%s %d %f", students[i].name, &students[i].roll_no, &students[i].marks);
    }
    
    printf("\nStudent Details:\n");
    printf("Name\tRoll No\tMarks\n");
    
    for(int i = 0; i < 5; i++) {
        printf("%s\t%d\t%.2f\n", students[i].name, students[i].roll_no, students[i].marks);
    }
    
    return 0;
}
