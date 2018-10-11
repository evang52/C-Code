/*  Example: C program to find area of a circle */

#include <stdio.h>
#define PI 3.14159

int main()
{
  float r, a, rmod;

  printf("Enter radius (in cm):\n");
  scanf("%f", &r);
  rmod = r / 2.54;
  a = PI * rmod * rmod;

  printf("Circle's area is %3.2f (sq in).\n", a);
}
