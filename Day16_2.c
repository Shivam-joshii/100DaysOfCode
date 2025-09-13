//Write a program to check whether a number is palindrom or not.

#include <stdio.h>
int main()
{
    int rem ;
    int reverse=0;
    int num;
    int dupli;
    printf("Enter the number\n");
    scanf("%d", &num);
    dupli = num;
    
    while(num!=0)
    {
        rem = num%10;
        reverse = reverse*10 + rem;
        num = num/10;
    }
    if (reverse == dupli)
    {
        printf("It is a palindrom number");
    }
    else 
    {
        printf("It is not a palindrom number ");
    }
}