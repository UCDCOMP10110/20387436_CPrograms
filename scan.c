#include <stdio.h>

int main(void)
{
double f;
int i;

printf("Please enter an integer value : ");
scanf("%d" , &i);
printf("Please enter a floating point number value : \n");
scanf("%lf" , &f);
printf("The product of the numbers is %lf \n" , f*i);


return 0;
}
