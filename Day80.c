#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks;
    int n;
    
    // Write student records to file
    fp = fopen("students.txt", "w");
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        printf("Enter name, roll number, marks for student %d: ", i+1);
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    fclose(fp);
    
    // Read and display student records
    fp = fopen("students.txt", "r");
    if(fp == NULL) {
        printf("File not found\n");
        return 1;
    }
    
    printf("\nStudent Records:\n");
    printf("Name\tRoll\tMarks\n");
    printf("------------------------\n");
    
    while(fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("%s\t%d\t%d\n", name, roll, marks);
    }
    
    fclose(fp);
    return 0;
}
