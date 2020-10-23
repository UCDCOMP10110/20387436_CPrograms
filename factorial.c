#include <stdio.h>

int main(void)
{
  int n;
  int count;
  int total;
  printf("Enter a number: ");
  scanf("%d", &n);
  count = 0;
  total = 1;
  while (count < n)
    {
      total = total*(count +1);
      count++;
    }
    printf("%d\n", total);
  return 0;
}
