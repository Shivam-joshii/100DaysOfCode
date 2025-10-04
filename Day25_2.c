/*********

 *****
  ****
   ***
    **
     *

********\
#include <stdio.h>
int main() 
{
    int j;
    // for printing spaces.
    for (int i = 0; i < 5 ; i++)
    {
        for ( j = 0; j < i; j++)
        {
            printf(" ");
        }    
            for ( j = i; j < 5; j++ )
            {
            printf("*");
            }
        
        printf("\n");
    }
    return 0;
}
