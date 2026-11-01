#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char n[20];
    double a;
    float  b;
    int  c;

    printf("Enter the value: ");
    scanf("%s", &n);

    a=atof(n);
    

    printf("String = %s\n", n);
    printf("double = %.2lf\n", a);
    printf("float = %.f\n", a);
    printf("int = %d", c);

    return 0;
}