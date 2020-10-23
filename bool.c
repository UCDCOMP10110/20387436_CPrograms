#include <stdio.h>
#include <stdbool.h>
#define THREASHOLD 10
int main(void)
{
bool c;
int x;
scanf("%ld", &x);
/* c evaluates true if x is greater than THREASHOLD*/
c = (x>THREASHOLD);
if (c)
  {
  printf("%ld is greater than %d\n", x, THREASHOLD);  
  }
  return 0;
}
