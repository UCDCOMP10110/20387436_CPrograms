#include <stdio.h>

int main(void)
{
  double f;

  printf("Please enter a floating point number : ");
  scanf("%lf" , &f);
  printf("The square of the number entered is %lf \n" , f*f);
  return 0;
}
