#include <stdio.h>
#include <math.h>

int main(void)
{
double a;
double b;
double c;
double r1;
double r2;
double d;
double v1;
double v2;

printf("Please enter the value for coefficient a: ");
scanf("%lf" , &a);
printf("Please enter the value for coefficient b: ");
scanf("%lf" , &b);
printf("Please enter the value for coefficient c: ");
scanf("%lf" , &c);

d = (b*b - (a * c * 4));

r1 = ((-b + (sqrt(b*b - (a * c * 4))))/(a * 2));
r2 = ((-b - (sqrt(b*b - (a * c * 4))))/(a * 2));

v1 = (a * (r1 * r1) + b * r1 + c);
v2 = (a * (r2 * r2) + b * r2 + c);

if(d == 0)
  {
    printf("The number of real roots is 1\n");
    printf("The value of the first root is %10.10lf\n" , r1);
    printf("The value of the quadratic equation evaluated at %10.10lf is %10.6lf\n", r1, v1);

  }

  else if(d < 0)
  {
    printf("The number of real roots is 0\n");
  }


 else
  {
    printf("The number of real roots is 2\n");
    printf("The value of the first root is %10.10lf\n" , r1);
    printf("The value of the quadratic equation evaluated at %10.10lf is %10.6lf\n", r1, v1);
    printf("The value of the second root is %10.10lf\n" , r2);
    printf("The value of the quadratic equation evaluated at %10.10lf is %10.6lf\n", r2, v2);

  }


return 0;
 }
