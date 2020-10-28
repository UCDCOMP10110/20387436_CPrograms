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
            printf("Invalid principal.\n");
            return -1;
    }
    else
    {
      printf("Please enter the rate: \n");
      scanf("%lf", &r);
        if(r<0.0)
        {
          printf("Invalid rate.\n");
          return -1;
        }
        if(r>100.0)
        {
          printf("Invalid rate.\n");
          return -1;
        }

        else
          {
            y = ((log((a / p)))/(log((r/(k * 100.0) + 1.0))) / k);
            printf("The number of years is %10.2lf\n" , y);
          }
    }
      }
  return 0;
}
