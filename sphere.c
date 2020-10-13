#include <stdio.h>

int main(void)
{
  double PI = 3.14159;
  double r;
  double volume;
  printf("Please enter the radius of the sphere: \n");
  scanf("%lf" , &r);

  volume = r*r*r*PI*4/3;
  printf("The volume is %lf\n" , volume);

  return 0;
}
