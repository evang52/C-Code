/*  Example: C program to find area of a circle */

#include <stdio.h>
#define PI 3.14159

int main()
{
  float r, a, rmod, circ;
while( r != 0){
  printf("Enter radius (in cm):\n");
  scanf("%f", &r);
  rmod = r / 2.54;
  a = PI * rmod * rmod;
  circ = PI * (2*rmod);
  printf("Circle's area is %3.2f (sq in).\n", a);
  printf("Its circumference is %3.2f (in).\n",circ);
  }
}
