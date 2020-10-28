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

printf("Please enter the amount: \n");
scanf("%lf", &a);
if(a<0.0)
  {
    printf("Invalid amount.\n");
    return -1;
  }
else
{
  printf("Please enter the principal: \n");
  scanf("%lf", &p);
    if(0.0>p)
    {
            printf("Invalid principal\n");
            return -1;
    }
    else
    {
      printf("Please enter the number of years: \n");
      scanf("%lf", &y);
        if(y<0.0)
        {
          printf("Invalid number of years.\n");
          return -1;
        }
        else
          {
            r = ((pow((a / p) , (1.0/(y * k))) - 1.0) * (100.0 * k)) ;
            printf("The rate is %10.2lf\n" , r);
          }
    }
      }
  return 0;
}
