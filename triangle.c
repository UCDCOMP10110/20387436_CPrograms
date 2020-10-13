#include <stdio.h>

int main(void)
{
double b;
double h;

printf("Please enter the length of the base: \n");
scanf("%lf" , &b);
printf("Please enter the height: \n");
scanf("%lf" , &h);
printf("The area of the triangle is %lf \n" , b*(h/2));

  return 0;
}
