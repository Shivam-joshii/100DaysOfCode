#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int areIdentical(struct Student s1, struct Student s2) {
    return (strcmp(s1.name, s2.name) == 0) &&
           (s1.roll_no == s2.roll_no) &&
           (s1.marks == s2.marks);
}

int main() {
    struct Student s1, s2;
    
    printf("Enter name, roll number, and marks for student 1: ");
    scanf("%s %d %f", s1.name, &s1.roll_no, &s1.marks);
    
    printf("Enter name, roll number, and marks for student 2: ");
    scanf("%s %d %f", s2.name, &s2.roll_no, &s2.marks);
    
    if (areIdentical(s1, s2)) {
        printf("Students are identical.\n");
    } else {
        printf("Students are not identical.\n");
    }
    
    return 0;
}
