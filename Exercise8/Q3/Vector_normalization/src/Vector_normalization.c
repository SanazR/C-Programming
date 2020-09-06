/*
 ============================================================================
 Name        : Vector_normalization.c
 Author      : UHE
 Version     :
 Copyright   : free
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/* reference: https://ecomputernotes.com/what-is-c/structure-and-union/
 structure-as-a-parameter-of-functions*/

#include <stdio.h>
#include <math.h>


struct Vector
{
	double x[5];
	double y[5];
};

struct Vector Normalization(struct Vector array)
{
	int i;
	double Magv;
	struct Vector Unit;
	for (i = 0; i < 5; i++)
	{
		Magv = sqrt(array.x[i] * array.x[i] + array.y[i] * array.y[i]);
		Unit.x[i] = (double)array.x[i] / Magv;
		Unit.y[i] = (double)array.y[i] / Magv;
	}

	return Unit;
}

int main()
{

	int i;
	struct Vector Unit;
	struct Vector array = { {1,2,4,5,7},{0,1,2,3,4} };

	Unit = Normalization(array);

	printf("The unit of Array is ");
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("Vector %d: X %f ", i,Unit.x[i]);
		printf("\ n");
		printf("Vector %d: Y %f ",i, Unit.y[i]);
		printf("\n");
	}

	printf("\n");

	return 0;
}





