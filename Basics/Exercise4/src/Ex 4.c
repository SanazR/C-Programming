/*
 ============================================================================
 Name        : Ex.c
 Author      : UHE
 Version     :
 Copyright   : free
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{
  double c=1.3,x;
  double a=2,b=5;
  x=(-b + (sqrt(b*b-4*a*c)))/(2*a);
  printf("x= %e\n",x);
  return 0;
}
