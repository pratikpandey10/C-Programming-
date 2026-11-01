#include <stdio.h>

int main  ()
{
   int a ;
   printf("enter the number  ", a);
   scanf("%d", &a);
   
   (a>0)?printf("The number is positive"): (a=0)?printf("The number is 0"): printf("The number is negative");

   return 0;
}