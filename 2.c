#include <stdio.h>
#include <math.h>

int main  ()
{
    double a,b,c;

    printf("write the values of a,b,c");
    scanf("%lf %lf %lf", &a,&b,&c);

    if  ((b*b) - (4*a*c ) >= 0)
    { printf("Root 1 = %.2lf\n", (-b + sqrt((b*b) - (4*a*c)))/(2*a));
      printf("Root 2 = %.2lf\n", (-b - sqrt((b*b) - (4*a*c)))/(2*a));

    }

    else 
    { 
        printf(" D is less than 0");

    }




    return 0;

}