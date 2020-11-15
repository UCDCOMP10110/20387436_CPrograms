#include <stdio.h>
int main(void)
{
  int N;
  int tmp;
  int pn;
  int p;
  p = 1;
  int a;
  a = 0;
  int i;

/* retrieve number of pell numbers*/

  printf("Enter how many pell numbers to print: ");
  scanf("%d" , &N);
  printf("\n");

  /* print pell numbers*/
if (N > 0)
{
printf("0 ");
}

if(N > 1)
{
  printf("1 ");
}
if(N > 2)
{
  for(i = 2; i<N; i++)
  {
    pn = (2 * p) + a;
    printf("%d ", pn);
    tmp = p;
    p = pn;
    a = tmp;
  }
}


  return 0;
}
