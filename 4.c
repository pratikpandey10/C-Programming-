#include <stdio.h>

int main()
{
    int a, b;
    printf("Write any two integers: ");
    scanf("%d %d", &a, &b);

    a += b;
    printf("Using the += assignment %d\n", a);

    a -= b;
    printf("Using the -= assignment %d\n", a);

    a *= b;
    printf("Using the *= assignment %d\n", a);

    a /= b;
    printf("Using the /= assignment %d\n", a);

    a %= b;
    printf("Using the %%= assignment %d\n", a);

    return 0;
}



//here it is changing the values of a after each step//