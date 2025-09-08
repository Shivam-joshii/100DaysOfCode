#include <stdio.h>
int main()
{
    int month;
    printf("Days for a non-leap year\n");
    printf("Enter the month number\n");
    scanf("%d" , &month );
    switch (month)
    {
        case 1:
        printf("January , 31 days");
        break;
        case 2:
        printf("February , 28 days ");
        break;
        case 3 :
        printf("March , 31 days");
        break;
        case 4 :
        printf("april, 30 days");
        break;
        case 5:
        printf("May , 31 days");
        break;
        case 6:
        printf("june, 30 days");
        break;
        case 7 :
        printf("july , 31 days");
        break;
        case 8 :
        printf("august , 31 days");
        break;
        case 9 :
        printf("september , 30 days");
        break;
        case 10 :
        printf("october , 31 days");
        break;
        case 11:
        printf("november , 30 days ");
        break;
        case 12 :
        printf("december , 31 days");
        break;
        default:
        printf("no results found ");

    }

    return 0;
}