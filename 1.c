#include <stdio.h>
#include <math.h>

int main  ()
{
    double x,y;
    
    printf("Enter two numbers");
    scanf("%lf %lf", &x,&y);

    printf("sin(%.2lf) = %.2lf\n",x, sin(x));
    printf("cos(%.2lf) = %.2lf\n",x, cos(x));
    printf("log(%.2lf) = %.2lf\n",x, log(x));
    printf("pow(%.2lf, %.2lf) = %.2lf\n", x , y, pow(x,y));
    printf("sqrt(%.2lf) = %.2lf\n", x, sqrt(x));

    return 0;

}    





