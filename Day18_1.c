// write a program to find factors of a number.
#include<stdio.h>
int main()
{
    int num ;
    int i;
    printf("Enter a number to find factors ");
    scanf("%d", &num);
    
    for ( i = 1 ; i <=num ; i++)
    {
        if (num%i==0)
        {
            printf("%d \n" , i);
        }
        
    }
    return 0;
}
