// Wrtite a program to print sum of first N odd numbers.

#include <stdio.h>
int main()
{
    int n , sum = 0 ;
    printf("enter N numbers:: ");
    scanf("%d", &n);
    
    for (int i= 1 ; i <=n; i++)
    {
        if(i%2==1)
        {
          sum = sum + i;
        }
    }
    
    printf("The Sum of N odd numbers = %d", sum);
    
    return 0;

}