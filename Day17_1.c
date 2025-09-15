// Write a program to check whether a number is armstrong or not.

#include <stdio.h>
#include <math.h>
int main()
{
   int num;
   int rem;
   int dupli;
   int sum=0;
   int n = 0;
   printf("Enter  a number :");
   scanf("%d", &num);
   
   dupli = num;
   int temp = num;
   
   while(temp !=0)
   {
     n++;
     temp = temp/10;
   }
   
   while(num!=0)
   {
       rem =  num%10;
       sum = sum + pow(rem,n);
       num = num/10;
       
   }
   if (dupli ==sum)
   {
       printf("its an armstrong number");
   }
   else
   {
       printf("not an armstrong number");
   }
   
}
