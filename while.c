#include <stdio.h>

int main(void)
{
int sum = 0;
int count = 0;
int num;
while (count < 10)
  {
    printf("Enter the next number: ");
    scanf("%d", &num);
    sum = sum + num;
    count = count + 1;
  }
  printf("The sum of the numbers is %d\n", sum);
  return 0;
}
