//Q4 Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#define PI 3.14159
int main() {
    float radius;
    float area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("The area of the circle is %.2f\n", area);
    printf("The circumference of the circle is %.2f\n", circumference);

    getchar();
    getchar();

    return 0;
}
