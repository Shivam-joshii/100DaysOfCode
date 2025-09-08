#include <stdio.h>
int main()
{
    int CP, SP;
    int profit , loss, profit1 , loss1;
    printf("enter cost price\n");
    printf("Enter selling price\n");
    scanf("%d" , &CP );
    scanf("%d" , &SP);
    if (SP > CP)
    {
        profit = SP - CP;
        profit1= (profit*100)/CP;
        printf("The profit is %d%% ", profit1);
    }
        else 
        {
            loss = CP - SP;
            loss1 = (loss*100)/CP;
            printf("The loss is %d%% ", loss1);
        }
    
    return 0;
   
 
}