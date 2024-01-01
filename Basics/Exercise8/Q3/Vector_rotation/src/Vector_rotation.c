/*
 ============================================================================
 Name        : Vector_rotation.c
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


struct Vector Rotation(struct Vector array)
{
	int i, angle=180;
	int Sinangle=0, Cosangle=1;
	struct Vector rotation;
	for (int i = 0; i < 5; i++)
	{
		rotation.x[i] = (array.x[i]*Cosangle)-(array.x[i]*Sinangle) ;
		rotation.y[i] = (array.y[i]*Sinangle)+(array.y[i]*Cosangle) ;
	}
	return rotation;
}

int main()
{
    int i;
	struct Vector rotation;
      struct Vector array = {{1,2,4,5,7},{0,1,2,3,4}};


	rotation = Rotation(array);

    printf("The Rotation of Array by 180 degree is ");
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		printf("Vector %d: X %d ", i,rotation.x[i]);
		printf("\n");
		printf("Vector %d: Y %d ",i, rotation.y[i]);
		printf("\n");
	}

	printf("\n");
	return 0;
}

