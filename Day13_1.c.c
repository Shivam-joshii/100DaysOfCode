//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    int num1, num2;
    char oper;
    int result;
    
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &oper); 
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    switch (oper) 
    {
        case '+':
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;

        case '/':
            if (num2 != 0) {
                printf("Result: %.2f\n", (float)num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("Result: %d\n", result);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
