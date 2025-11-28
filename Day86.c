#include <stdio.h>

enum Operation {ADD = 1, SUBTRACT, MULTIPLY};

int main() {
    int choice;
    double num1, num2, result;

    printf("Menu:\n1. Add\n2. Subtract\n3. Multiply\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    enum Operation op = (enum Operation)choice;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch(op) {
        case ADD:
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case SUBTRACT:
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case MULTIPLY:
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
