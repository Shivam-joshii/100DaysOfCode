// Write a program to reverse a number.

#include <stdio.h>
int main()
{
    int num ,last , reverse=0;
    printf("Enter the number to be reversed:");
    scanf("%d",&num);
    while (num!=0)
    {
        last= num%10;
        reverse = reverse*10 + last ;
        num = num/10;
    }
    printf("The reverse of the number : %d", reverse);
    return 0;
}
