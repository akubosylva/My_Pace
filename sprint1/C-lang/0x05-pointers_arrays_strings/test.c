#include <stdio.h>

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   int a[5];
   int *p;
   int *p2;

   *a = 98;
   *(a + 1) = 198;
   *(a + 2) = 298;
   a[3] = 398;
   *(a + 4) = 498;
   printf("a[0] = %d, a[1] = %d, a[2] = %d, a[3] = %d, a[4] = %d\n", *a,*(a + 1),*(a + 2),a[3],*(a + 4));
   p = (a + 1);
   *p = 98;  
   printf("a[1] = %d\n", *p);
   p2 = (a + 3);
   *p2 = *p + 1337;
   printf("a[3] = %d\n", *p2);
   return (0);
}
