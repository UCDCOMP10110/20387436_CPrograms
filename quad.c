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

printf("Please enter the value for coefficient a: ");
scanf("%lf" , &a);
printf("Please enter the value for coefficient b: ");
scanf("%lf" , &b);
printf("Please enter the value for coefficient c: ");
scanf("%lf" , &c);

d = (b*b - (a * c * 4));

r1 = ((-b + (sqrt(b*b - (a * c * 4))))/(a * 2));
r2 = ((-b - (sqrt(b*b - (a * c * 4))))/(a * 2));

if(d == 0)
  {
    printf("The number of real roots is 1\n");
    printf("The value of the first root is %10.5lf\n" , r1);
  }

  else if(d < 0)
  {
    printf("The number of real roots is 0\n");
  }


 else
  {
    printf("The number of real roots is 2\n");
    printf("The value of the first root is %10.5lf\n" , r1);
    printf("The value of the second root is %10.5lf\n" , r2);
  }


return 0;
 }
