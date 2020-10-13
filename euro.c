#include <stdio.h>

int main(void)
{
  double euro;
  double amount;

  printf("Please enter the amount in Euros: \n");
  scanf("%lf" , &euro);

  amount = 0.8*euro;

  printf("%.2lf Euro is equivalent to %.2lf pounds sterling\n" , euro , amount);


  return 0;
}
