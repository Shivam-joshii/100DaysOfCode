//Write a program to calculate electricity bill based on units consumed with these rates:
//First 100 units at ₹5/unit
//Next 100 units at ₹7/unit
//Next 100 units at ₹10/unit
//Above at ₹12/unit

#include <stdio.h>
int main()
{
    int units, bill = 0 ;
    printf("Enter the number of units :");
    scanf ("%d", &units);
    {
        if (units<=100)
        {
            bill = units*5;
            printf("Bill = %d ", bill);
            
        }
        else if (units<=200)
        {
            bill = 100*5 + (units - 100)*7;
            printf("Bill = %d ", bill);
        }
        else if (units<= 300)
        {
            bill = 100*5+ 100*7 + (units - 200)*10;
            printf("Bill = %d ", bill);
        }
        else
        {
        bill = 100*5 + 100*7 +100*10 +(units-300)*12;
        printf("Bill = %d",bill);
        
        }
    }
    return 0 ;
    
}


        