#include <stdio.h>
#include <math.h>

int main(void)
{
double p;
double r;
double k;
k = 12;
double y;
double a;

printf("Please enter the principal: \n");
scanf("%lf", &p);
if(p<0.0)
  {
    printf("Invalid Principal.\n");
  }
else
{
  printf("Please enter the rate: \n");
  scanf("%lf", &r);
    if(0.0>r)
    {
            printf("Invalid rate\n");
    }
    else if (r>100)
    {
            printf("Invalid rate\n");
    }
    else
    {
      printf("Please enter the number of years: \n");
      scanf("%lf", &y);
        if(y<0.0)
          return -1;
        else
          {
            a = (p * (pow(((r/(k * 100.0) + 1.0)) , (y * k))));
            printf("The Amount is %10.2lf\n" , a);
          }
    }
      }
  return 0;
}
