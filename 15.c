#include <stdio.h>
int main ()
{
  double a,b,temp;
  printf("Write the value of a,b: ");
  scanf("%lf %lf", &a, &b);
  a+=b;
  printf("before transferring the values: %.2lf \n",a);
  temp=a;
  a=b;
  b=temp;
  a+=b;
  printf("after transferring the values: %.2lf \n", a);
  return 0;
}