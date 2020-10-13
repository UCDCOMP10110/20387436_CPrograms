#include <stdio.h>


int main(void)
{
  double PI = 3.14159;
  double r;
  double area;

  /* declare the other required variables */


  /* get the input from the console */
  printf("Please enter the radius:\n");
  scanf("%lf" , &r);



  /* compute the area */

  area = PI*r*r;


  /* write out the answer */
  printf("The area of the circle is %lf\n" , area);
  return 0;
}
