#include <stdio.h>
#include <math.h>

int main(void)
{
double a;
double b;
double c;
double r1;
double r2;

printf("Please enter the value for coefficient a: ");
scanf("%lf" , &a);
printf("Please enter the value for coefficient b: ");
scanf("%lf" , &b);
printf("Please enter the value for coefficient c: ");
scanf("%lf" , &c);

r1 = ((-b + (sqrt(b*b - (a * c * 4))))/(a * 2));
r2 = ((-b - (sqrt(b*b - (a * c * 4))))/(a * 2));

printf("The value of the first root is %lf" , r1);
printf("The value of the second root is %lf" , r2);

return 0;
 }
