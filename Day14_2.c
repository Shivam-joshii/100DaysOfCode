//Write a program to print the sum of N even numbers.

#include <stdio.h>
int main()
{
    int n , sum = 0 ;
    printf("enter N numbers:: ");
    scanf("%d", &n);
    
    for (int i= 1 ; i <=n; i++)
    {
        if(i%2==0)
        {
          sum = sum + i;
        }
    }
    
    printf("The Sum of N even numbers = %d", sum);
    
    return 0;

}