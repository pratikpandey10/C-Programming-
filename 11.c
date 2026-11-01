#include <stdio.h>

int main() 
{
    int a,b,c;
    printf("Write the values of a,b,c:  ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a+b >c) || (a+c>b) || (b+c > a))
    
    {
        printf("It is a valid triangle ");
    }

    
    else 
    {

        printf("It is not a valid triangle");
    }
    return 0;
}






