#include <stdio.h>

int main() 
{
    int sum, n;
    double mean;

    printf("Enter the sum: ");
    scanf("%d", &sum);

    printf("Enter the count (n): ");
    scanf("%d", &n);

    mean = (double)sum / n;

    printf("Mean = (double)%d / %d = %.2lf\n", sum, n, mean);

    return 0;
}
