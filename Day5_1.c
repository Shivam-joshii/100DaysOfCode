//Q9 Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main() {
    float principal, rate, time;
    float simple_interest, compound_interest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter annual interest rate (in percentage): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;

    compound_interest = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);

    getchar();
    getchar();

    return 0;
}