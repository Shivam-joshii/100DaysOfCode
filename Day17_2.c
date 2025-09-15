// write a program to check whether a number is prime or not.

#include <stdio.h>
int main()
{
    int n ;
    int i , n1, isprime =1;
    printf("Enter a number\n");
    scanf("%d", &n);
    n1 = n/2;
    
    if(n<=1)
    {
        isprime = 0;
    }
    for (i = 2 ; i<=n1; i++)
    {
        if (n%i==0)
        {
            isprime = 0;
            break;
        }
    }
    if(isprime)
    {
        printf("It is a prime number ");
    }
    else 
    {
        printf("It is not a prime number ");
    }
    return 0;
}
