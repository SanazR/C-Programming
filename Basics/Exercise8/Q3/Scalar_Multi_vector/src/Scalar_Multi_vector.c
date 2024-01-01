/*
 ============================================================================
 Name        : Scalar_Multi_vector.c
 Author      : UHE
 Version     :
 Copyright   : free
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

struct Vector
{
	int x[5];
	int y[5];
};

struct Vector Multiplication(struct Vector array)
{
	int i,scalar= 4;
	struct Vector Multi;
	for (i = 0; i < 5; i++)
	{
		Multi.x[i] = array.x[i]*4 ;
		Multi.y[i] = array.y[i]*4 ;
	}
	return Multi;
}

int main()
{
    int i;
	struct Vector Multi;
      struct Vector array = {{1,2,4,5,7},{0,1,2,3,4}};

	Multi = Multiplication(array);

    printf("The Multi of Array is ");
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("Vector %d: X %d ", i,Multi.x[i]);
		printf("\n");
		printf("Vector %d: Y %d ",i, Multi.y[i]);
		printf("\n");
	}
	printf("\n");

	return 0;
}
