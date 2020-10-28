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
  double n;

printf("Which value would you like to compute: 1) Amount 2) Principal 3) Rate 4) Number of years\n");
printf("Select either 1, 2, 3 or 4.\n");
scanf("%lf", &n);
  if (n == 1)
  {
    printf("Please enter the principal: \n");
    scanf("%lf", &p);
    if(p<0.0)
      {
        printf("Invalid principal.\n");
      }
    else
    {
      printf("Please enter the rate: \n");
      scanf("%lf", &r);
        if(0.0>=r)
        {
                printf("Invalid rate.\n");
        }
        else if (r>100)
        {
                printf("Invalid rate.\n");
        }
        else
        {
          printf("Please enter the number of years: \n");
          scanf("%lf", &y);
            if(y<=0.0)
              {
                printf("Invalid number of years.");
              return -1;
            }
            else
              {
                a = (p * (pow(((r/(k * 100.0) + 1.0)) , (y * k))));
                printf("The amount is %10.2lf" , a);
              }
        }
          }
        }
    else if (n == 2)
    {
      printf("Please enter the amount: \n");
      scanf("%lf", &a);
      if(a<0.0)
        {
          printf("Invalid amount.\n");
          return -1;
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
              if(y<=0.0)
                return -1;
              else
                {
                  p = (a / (pow(((r/(k * 100.0) + 1.0)) , (y * k))));
                  printf("The principal is %10.2lf" , p);
                }
          }
            }
    }
    else if (n == 3)
    {
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
              if(y<=0.0)
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
  }
    else if (n == 4)
    {
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
    }
    else
    {
      printf("Invalid option.\n");
    }

  return 0;
}
