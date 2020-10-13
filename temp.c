#include <stdio.h>

int main(void)
{
  double c;
  double f;

  printf("Please enter the temperature in Fahrenheit: \n");
  scanf("%lf" , &f);

  c = (f-32)*5/9;

  printf("%.2lf degrees Fahrenheit is equivalent to %.2lf degrees Celsius\n" , f , c);


  return 0;
}
