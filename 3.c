#include <stdio.h>

int main  ()
{
   char a,b;
   printf("Write any two characters: ");
   scanf("%c %c", &a, &b);

   
   printf("Use of /n is as follows = \n%c\n \n%c\n\n", a,b);
   printf("Use of /t is as follows = \n%c\t \n%c\n", a,b);
   printf("Use of /b is as follows = \n%c\b \n%c\b\n", a,b);


   return 0;
}    