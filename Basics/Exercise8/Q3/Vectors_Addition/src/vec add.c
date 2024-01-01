/*
 ============================================================================
 Name        : vec.c
 Author      : UHE
 Version     :
 Copyright   : free
 Description : Hello World in C, Ansi-style
 ============================================================================


 /* reference: http://ecomputernotes.com/what-is-c/structure-and-union/vectors-with-structures
    It hasn't copied from this page
    https://www.tutorialspoint.com/cprogramming/c_multi_dimensional_arrays.htm */

#include <stdio.h>

struct Vector
{
	int x[5];
	int y[5];
};

struct Vector Add(struct Vector v1, struct Vector v2)
{
	int i;
	struct Vector Sum;
	for ( i = 0; i < 5; i++)
	{
		Sum.x[i] = v1.x[i] + v2.x[i];
		Sum.y[i] = v1.y[i] + v2.y[i];
	}
	return Sum;
}

int main()
{
    int i;
	struct Vector Sum;
      struct Vector v1 = {{1,2,4,5,7},{0,1,2,3,4}};
	  struct Vector v2 = {{0,2,5,6,7 },{ 2,3,4,8,9 }};

	Sum = Add(v1, v2);
    printf(" The sum of X direction is: ");
	for ( i = 0; i < 5; i++)
	{
		printf(" %d ", Sum.x[i]);
	}
	printf("\n");
	printf(" The sum of Y direction is:");
	for ( i = 0; i < 5; i++)
	{
		printf(" %d ", Sum.y[i]);
	}
	return 0;
}


