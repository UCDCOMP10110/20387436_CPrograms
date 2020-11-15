#include <stdio.h>

int main(void) {

    double w, x, y, z, tmp;
    /* you may need some extra variables - but NO arrays please! */

    /* Do not change the following input statement */
    scanf("%lf%lf%lf%lf", &w,&x,&y,&z);

    /* Enter your solution here */
    /* Deciding the first (largest) variable*/
    if (x > w && x > y && x > z)
    {
      tmp = x;
      x = w;
      w = tmp;
    }
    if ( y > w && y > x && y > z)
    {
      tmp = y;
      y = w;
      w = tmp;
    }
    if ( z > w && z > x && z > y)
    {
      tmp = z;
      z = w;
      w = tmp;
    }

    /* Deciding on second largest variable*/
    if(y > x && y > z)
    {
      tmp = y;
      y = x;
      x = tmp;
    }
    if(z > x && z > y)
    {
      tmp = z;
      z = x;
      x = tmp;
    }
    /* Deciding on the third largest variable*/
    if (z > y)
    {
      tmp = z;
      z = y;
      y = tmp;
    }


    /* Do not change the following output statement */
    printf("%.1f %.1f %.1f %.1f\n",w, x, y, z);

    return 0;
}
