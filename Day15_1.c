// Write a program to calculate factorial of a number.

#include <stdio.h>
int main()
{
    int num , product = 1 ;
    printf("enter the number to calculate its factorial: ");
    scanf("%d", &num);
    
    for (int i= 1 ; i <=num; i++)
    {
      
          product = product*i;
    }
    
    printf("The Sum of N even numbers = %d", product);
    
    return 0;

}